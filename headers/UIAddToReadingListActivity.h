
@interface UIAddToReadingListActivity : UIActivity {

}

 - (id) activityType;
 - (id) _activityImage;
 - (id) activityTitle;
 - (BOOL) canPerformWithActivityItems:(id)a;
 - (void) performActivity;
 - (void) prepareWithActivityItems:(id)a;
 - (void) _addToReadingList:(id)awithTitle:(id)b;


@end
