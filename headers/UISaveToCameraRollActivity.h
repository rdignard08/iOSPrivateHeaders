
@interface UISaveToCameraRollActivity : UIActivity {

    q _imageCount;
    q _videoCount;
}

 - (id) activityType;
 - (id) _activityImage;
 - (id) activityTitle;
 - (BOOL) canPerformWithActivityItems:(id)a;
 - (void) performActivity;
 - (void) prepareWithActivityItems:(id)a;
 - (void) setImageCount:(q)a;
 - (q) videoCount;
 - (void) setVideoCount:(q)a;
 - (q) imageCount;


@end
