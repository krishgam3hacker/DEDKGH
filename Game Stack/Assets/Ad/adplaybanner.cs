using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class adplaybanner : MonoBehaviour
{
     AdMobScript  ads;
    // Start is called before the first frame update
    void Start()
    {
        ads = GetComponent<AdMobScript>();
        ads.RequestBanner();
        ads.ShowBannerAd();
    }

}
