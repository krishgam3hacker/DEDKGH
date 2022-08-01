using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

namespace ByteBrewSDK
{
    public class ByteBrew_Helper : MonoBehaviour
    {
        private static string gameID;
        private static string gameKey;
        private static string buildVersion;
        private static string unityVersion;
        private static string currentGUID;
        private static string bundleID;
        private static DateTime startTime;
        private static DateTime closeTime;

        public static bool SetGameSettings(ByteBrewSettings settings)
        {
            startTime = DateTime.Now;
            buildVersion = Application.version;
            unityVersion = "UNITY " + Application.unityVersion;
            bundleID = Application.identifier;

#if UNITY_IPHONE && !(UNITY_EDITOR)
            if (!string.IsNullOrEmpty(settings.iosSDKKey) || !string.IsNullOrEmpty(settings.iosGameID))
            {
                gameKey = settings.iosSDKKey;
                gameID = settings.iosGameID;
                return ByteBrewiOSHandler.InitializePlugin(gameID, gameKey, unityVersion, buildVersion, bundleID);
            }
#endif

#if UNITY_ANDROID && !(UNITY_EDITOR)
            if (!string.IsNullOrEmpty(settings.androidSDKKey) || !string.IsNullOrEmpty(settings.androidGameID))
            {
                gameKey = settings.androidSDKKey;
                gameID = settings.androidGameID;
                return ByteBrewAndroidHandler.InitializePlugin(unityVersion, buildVersion, bundleID, gameID, gameKey);
            }
#endif
            return false;
        }

        public static bool SetupPushNotifications()
        {

#if UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.SetPushNotifications();
#endif

#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.StartPushNotifications();
#endif
            return false;
        }

        /// <summary>
        /// Set a Custom Data key pair part of the user
        /// </summary>
        /// <param name="key">Name of the key</param>
        /// <param name="value">String value</param>
        public static void AddCustomDataPair(string key, string pair) 
        {
            var data = new Dictionary<string, string>();
            data.Add("key", key);
            data.Add("value", pair);
            data.Add("type", "string");

#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.SendCustomUserData(data);

#elif UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.SendCustomUserData(data);

#endif
        }

        /// <summary>
        /// Set a Custom Data key pair part of the user
        /// </summary>
        /// <param name="key">Name of the key</param>
        /// <param name="value">Double value</param>
        public static void AddCustomDataPair(string key, double pair) 
        {
            var data = new Dictionary<string, string>();
            data.Add("key", key);
            data.Add("value", pair.ToString());
            data.Add("type", "double");

#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.SendCustomUserData(data);

#elif UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.SendCustomUserData(data);

#endif
        }

        /// <summary>
        /// Add a custom Data Attribute to user
        /// </summary>
        /// <param name="key">Name of the key</param>
        /// <param name="value">Int value</param>
        public static void AddCustomDataPair(string key, int pair) 
        {
            var data = new Dictionary<string, string>();
            data.Add("key", key);
            data.Add("value", pair.ToString());
            data.Add("type", "integer");

#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.SendCustomUserData(data);

#elif UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.SendCustomUserData(data);

#endif
        }

        /// <summary>
        /// Set a Custom Data key pair part of the user
        /// </summary>
        /// <param name="key">Name of the key</param>
        /// <param name="value">Boolean value</param>
        public static void AddCustomDataPair(string key, bool pair) 
        {
            var data = new Dictionary<string, string>();
            data.Add("key", key);
            data.Add("value", pair.ToString().ToLower());
            data.Add("type", "boolean");

#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.SendCustomUserData(data);

#elif UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.SendCustomUserData(data);

#endif
        }

        /// <summary>
        /// Add a custom event to be tracked in ByteBrew
        /// </summary>
        /// <param name="eventName">Name of the event (ex. shopOpened)</param>
        public static void AddNewCustomEvent(string eventName)
        {
            ByteLog log = new ByteLog();
            log.externalData = new Dictionary<string, string>();
            log.category = "custom";
            log.externalData.Add("eventType", eventName);


#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.SendCustomEvent(log);
#elif UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.SendCustomEvent(log);
#endif
        }

        /// <summary>
        /// Add a custom event to be tracked in ByteBrew
        /// </summary>
        /// <param name="eventName">Name of the event (ex. levelFailed)</param>
        /// <param name="value">Particular value that corresponds to the event (ex. 35)</param>
        public static void AddNewCustomEvent(string eventName, float value)
        {
            ByteLog log = new ByteLog();
            log.externalData = new Dictionary<string, string>();
            log.category = "custom";
            log.externalData.Add("eventType", eventName);
            log.externalData.Add("value", value.ToString());

#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.SendCustomEvent(log);

#elif UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.SendCustomEvent(log);

#endif
        }

        /// <summary>
        /// Add a custom event to be tracked in ByteBrew
        /// </summary>
        /// <param name="eventName">Name of the event (ex. WeaponUnloced)</param>
        /// <param name="value">Particular value that corresponds to the event (ex. SledgeHammer)</param>
        public static void AddNewCustomEvent(string eventName, string value)
        {
            ByteLog log = new ByteLog();
            log.externalData = new Dictionary<string, string>();
            log.category = "custom";
            log.externalData.Add("eventType", eventName);
            log.externalData.Add("value", value);

#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.SendCustomEvent(log);

#elif UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.SendCustomEvent(log);

#endif
        }

        public static void AddProgressionEvent(ByteBrewProgressionTypes progressionStatus, string environment, string stage)
        {
            ByteLog log = new ByteLog();
            log.externalData = new Dictionary<string, string>();
            log.category = "progression";
            log.externalData.Add("progressionStatus", progressionStatus.ToString());
            log.externalData.Add("progressionEnvironment", environment);
            log.externalData.Add("progressionStage", stage);

#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.SendCustomEvent(log);

#elif UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.SendCustomEvent(log);

#endif
        }

        public static void AddProgressionEvent(ByteBrewProgressionTypes progressionStatus, string environment, string stage, string value)
        {
            ByteLog log = new ByteLog();
            log.externalData = new Dictionary<string, string>();
            log.category = "progression";
            log.externalData.Add("progressionStatus", progressionStatus.ToString());
            log.externalData.Add("progressionEnvironment", environment);
            log.externalData.Add("progressionStage", stage);
            log.externalData.Add("progressionValue", value);

#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.SendCustomEvent(log);

#elif UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.SendCustomEvent(log);

#endif
        }

        public static void AddProgressionEvent(ByteBrewProgressionTypes progressionStatus, string environment, string stage, float value)
        {
            ByteLog log = new ByteLog();
            log.externalData = new Dictionary<string, string>();
            log.category = "progression";
            log.externalData.Add("progressionStatus", progressionStatus.ToString());
            log.externalData.Add("progressionEnvironment", environment);
            log.externalData.Add("progressionStage", stage);
            log.externalData.Add("progressionValue", value.ToString());

#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.SendCustomEvent(log);

#elif UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.SendCustomEvent(log);

#endif
        }

        /// <summary>
        /// Track when a Ad is shown to the user
        /// </summary>
        /// <param name="placementType">Placement type of the Ad. (ex. Interstitial, Reward)</param>
        /// <param name="adLocation">The location of the shown ad. (ex. shopOpen, levelFail...)</param>
        public static void NewTrackedAdEvent(string placementType, string adLocation)
        {
            ByteLog log = new ByteLog();
            log.externalData = new Dictionary<string, string>();
            log.category = "custom";
            log.externalData.Add("eventType", "adEvent");
            log.externalData.Add("placementType", placementType);
            log.externalData.Add("adLocation", adLocation);


#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.SendCustomEvent(log);

#elif UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.SendCustomEvent(log);

#endif
        }

        /// <summary>
        /// Track when a Ad is shown to the user
        /// </summary>
        /// <param name="placementType">Placement type of the Ad. (ex. Interstitial, Reward)</param>
        /// <param name="adLocation">The location of the shown ad. (ex. shopOpen, levelFail...)</param>
        /// <param name="AdID">The Ad ID or Unit ID of the ad just shown</param>
        public static void NewTrackedAdEvent(string placementType, string adLocation, string AdID)
        {
            ByteLog log = new ByteLog();
            log.externalData = new Dictionary<string, string>();
            log.category = "custom";
            log.externalData.Add("eventType", "adEvent");
            log.externalData.Add("placementType", placementType);
            log.externalData.Add("adLocation", adLocation);
            log.externalData.Add("ADID", AdID);


#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.SendCustomEvent(log);

#elif UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.SendCustomEvent(log);

#endif
        }

        /// <summary>
        /// Track when a Ad is shown to the user
        /// </summary>
        /// <param name="placementType">Placement type of the Ad. (ex. Interstitial, Reward)</param>
        /// <param name="adLocation">The location of the shown ad. (ex. shopOpen, levelFail...)</param>
        /// <param name="AdID">The Ad ID or Unit ID of the ad just shown</param>
        /// <param name="adProvider">The provider of the Ad. (ex. AdMob, IronSource)</param>
        public static void NewTrackedAdEvent(string placementType, string adLocation, string AdID, string adProvider)
        {
            ByteLog log = new ByteLog();
            log.externalData = new Dictionary<string, string>();
            log.category = "custom";
            log.externalData.Add("eventType", "adEvent");
            log.externalData.Add("placementType", placementType);
            log.externalData.Add("adLocation", adLocation);
            log.externalData.Add("ADID", AdID);
            log.externalData.Add("adProvider", adProvider);


#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.SendCustomEvent(log);

#elif UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.SendCustomEvent(log);

#endif
        }

        /// <summary>
        /// Track a purchase Event
        /// </summary>
        /// <param name="store">Store the purchase occured in (ex. Apple, Google)</param>
        /// <param name="currency">The currency used for the purchase</param>
        /// <param name="amount">The amount spent on the purchase</param>
        /// <param name="itemID">The ID or name of the item purchased</param>
        /// <param name="category">The name of the category item was purchased (ex. currency)</param>
        public static void AddTrackedInAppPurchaseEvent(string store, string currency, float amount, string itemID, string category)
        {
            ByteLog log = new ByteLog();
            log.externalData = new Dictionary<string, string>();
            log.category = "custom";
            log.externalData.Add("eventType", "IAPEvent");
            log.externalData.Add("store", store);
            log.externalData.Add("currency", currency);
            log.externalData.Add("amount", amount.ToString());
            log.externalData.Add("itemID", itemID);
            log.externalData.Add("category", category);


#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.SendCustomEvent(log);

#elif UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.SendCustomEvent(log);

#endif
        }

        /// <summary>
        /// Track a iOS purchase Event
        /// </summary>
        /// <param name="store">Store the purchase occured in (ex. Apple, Google)</param>
        /// <param name="currency">The currency used for the purchase</param>
        /// <param name="amount">The amount spent on the purchase</param>
        /// <param name="itemID">The ID or name of the item purchased</param>
        /// <param name="category">The name of the category item was purchased (ex. currency)</param>
        /// <param name="receipt">The iOS receipt</param>
        public static void AddTrackediOSInAppPurchaseEvent(string store, string currency, float amount, string itemID, string category, string receipt)
        {
            ByteLog log = new ByteLog();
            log.externalData = new Dictionary<string, string>();
            log.category = "custom";
            log.externalData.Add("eventType", "IAPEvent");
            log.externalData.Add("store", store);
            log.externalData.Add("currency", currency);
            log.externalData.Add("amount", amount.ToString());
            log.externalData.Add("itemID", itemID);
            log.externalData.Add("category", category);
            log.externalData.Add("receipt", receipt);

#if UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.SendCustomEvent(log);

#endif
        }

        /// <summary>
        /// Track a Google purchase Event
        /// </summary>
        /// <param name="store">Store the purchase occured in (ex. Apple, Google)</param>
        /// <param name="currency">The currency used for the purchase</param>
        /// <param name="amount">The amount spent on the purchase</param>
        /// <param name="itemID">The ID or name of the item purchased</param>
        /// <param name="category">The name of the category item was purchased (ex. currency)</param>
        /// <param name="receipt">The iOS receipt</param>
        public static void AddTrackedGoogleInAppPurchaseEvent(string store, string currency, float amount, string itemID, string category, string receipt, string signature)
        {
            //New Receipt String Formatter
            receipt = receipt.Replace("\"", "\\\"");
            //This if would only be true if there was a nested json string in a key value, ex Developer Payloads
            if (receipt.IndexOf("\\\\\"") >= 0)
            {
                receipt = receipt.Replace("\\\\\"", "\\\\\\\"");
            }

            ByteLog log = new ByteLog();
            log.externalData = new Dictionary<string, string>();
            log.category = "custom";
            log.externalData.Add("eventType", "IAPEvent");
            log.externalData.Add("store", store);
            log.externalData.Add("currency", currency);
            log.externalData.Add("amount", amount.ToString());
            log.externalData.Add("itemID", itemID);
            log.externalData.Add("category", category);
            log.externalData.Add("receipt", receipt);
            log.externalData.Add("signature", signature);

#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.SendCustomEvent(log);

#endif
        }


        /// <summary>
        /// Track a iOS purchase Event
        /// </summary>
        /// <param name="store">Store the purchase occured in (ex. Apple, Google)</param>
        /// <param name="currency">The currency used for the purchase</param>
        /// <param name="amount">The amount spent on the purchase</param>
        /// <param name="itemID">The ID or name of the item purchased</param>
        /// <param name="category">The name of the category item was purchased (ex. currency)</param>
        /// <param name="receipt">The iOS receipt</param>
        public static void ValidateTrackediOSInAppPurchaseEvent(string store, string currency, float amount, string itemID, string category, string receipt)
        {
            ByteLog log = new ByteLog();
            log.externalData = new Dictionary<string, string>();
            log.category = "custom";
            log.externalData.Add("eventType", "IAPEvent");
            log.externalData.Add("store", store);
            log.externalData.Add("currency", currency);
            log.externalData.Add("amount", amount.ToString());
            log.externalData.Add("itemID", itemID);
            log.externalData.Add("category", category);
            log.externalData.Add("receipt", receipt);

#if UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.ValidateIAPEvent(log);

#endif
        }

        /// <summary>
        /// Track a Google purchase Event
        /// </summary>
        /// <param name="store">Store the purchase occured in (ex. Apple, Google)</param>
        /// <param name="currency">The currency used for the purchase</param>
        /// <param name="amount">The amount spent on the purchase</param>
        /// <param name="itemID">The ID or name of the item purchased</param>
        /// <param name="category">The name of the category item was purchased (ex. currency)</param>
        /// <param name="receipt">The iOS receipt</param>
        public static void ValidateTrackedGoogleInAppPurchaseEvent(string store, string currency, float amount, string itemID, string category, string receipt, string signature)
        {
            //New Receipt String Formatter
            receipt = receipt.Replace("\"", "\\\"");
            //This if would only be true if there was a nested json string in a key value, ex Developer Payloads
            if (receipt.IndexOf("\\\\\"") >= 0)
            {
                receipt = receipt.Replace("\\\\\"", "\\\\\\\"");
            }

            ByteLog log = new ByteLog();
            log.externalData = new Dictionary<string, string>();
            log.category = "custom";
            log.externalData.Add("eventType", "IAPEvent");
            log.externalData.Add("store", store);
            log.externalData.Add("currency", currency);
            log.externalData.Add("amount", amount.ToString());
            log.externalData.Add("itemID", itemID);
            log.externalData.Add("category", category);
            log.externalData.Add("receipt", receipt);
            log.externalData.Add("signature", signature);

#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.ValidateIAPEvent(log);

#endif
        }

        public static void RequestAppTrackingTrasparency()
        {
#if UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.PromptForAppTrackingTransparency();
#endif
        }

        public static void LoadRemoteConfigs()
        {
#if UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.RetrieveRemoteConfigs();
#endif

#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.RetrieveRemoteConfigs();
#endif
        }

        public static string RetrieveRemoteConfigValue(string key, string defaultValue)
        {
#if UNITY_IPHONE && !(UNITY_EDITOR)
            return ByteBrewiOSHandler.GetRemoteConfigValue(key, defaultValue);
#elif UNITY_ANDROID && !(UNITY_EDITOR)
            return ByteBrewAndroidHandler.GetRemoteConfigValue(key, defaultValue);
#else
            return "";
#endif
        }

        public static bool AreRemoteConfigsSet()
        {
#if UNITY_IPHONE && !(UNITY_EDITOR)
            return ByteBrewiOSHandler.CheckIfRemoteConfigsAreSet();
#elif UNITY_ANDROID && !(UNITY_EDITOR)
            return ByteBrewAndroidHandler.CheckIfRemoteConfigsAreSet();
#else
        return true;
#endif
        }

        public static void RestartTracking()
        {

#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.EnableTracking();

#elif UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.EnableTracking();

#endif
        }

        public static void StopTracking()
        {

#if UNITY_ANDROID && !(UNITY_EDITOR)
            ByteBrewAndroidHandler.DisableTracking();

#elif UNITY_IPHONE && !(UNITY_EDITOR)
            ByteBrewiOSHandler.DisableTracking();

#endif
        }

        public static string GetCurrentUserID()
        {
#if UNITY_IPHONE && !(UNITY_EDITOR)
            return ByteBrewiOSHandler.GetUserID();
#elif UNITY_ANDROID && !(UNITY_EDITOR)
            return ByteBrewAndroidHandler.GetCurrentUserID();
#else
            return "";
#endif
        }

    }
}

