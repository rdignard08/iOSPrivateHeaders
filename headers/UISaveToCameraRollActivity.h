
@interface UISaveToCameraRollActivity : UIActivity {

    long long _imageCount;
    long long _videoCount;
}

 - (id) activityType;
 - (id) _activityImage;
 - (id) activityTitle;
 - (BOOL) canPerformWithActivityItems:(id)a ;
 - (void) performActivity;
 - (void) prepareWithActivityItems:(id)a ;
 - (void) setImageCount:(long long)a ;
 - (long long) videoCount;
 - (void) setVideoCount:(long long)a ;
 - (long long) imageCount;


@end
