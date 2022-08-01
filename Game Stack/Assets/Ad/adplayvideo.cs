using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class adplayvideo : MonoBehaviour
{
    AdMobScript ad;

    
     [SerializeField]  int adcount = 4;


    static  int loadCount = 0;

    void Start()
    {
        ad = GetComponent<AdMobScript>();
        ad.RequestInterstitial();

        Debug.Log(loadCount);
        if (loadCount == adcount)
        {
            ad.RequestInterstitial();
            Debug.Log("ad gonna paly");
            loadCount = 0;
            StartCoroutine(ShowAD());
           Invoke("ShowAD",3f);

        }
        else
        {
            loadCount++;
            Debug.Log(loadCount + " is current");
        }


    }

    public void FixedUpdate()
    {
       
    }


    

    public IEnumerator ShowAD()
    {
        yield return new WaitForSeconds(2f);
        ad.ShowInterstitialAd();
        Debug.Log("Player ad");
    }

}

   
