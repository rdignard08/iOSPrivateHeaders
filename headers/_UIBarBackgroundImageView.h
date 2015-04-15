
@interface _UIBarBackgroundImageView : UIImageView {

    @"UIView" _topStripView;
    @"UIImageView" _customImageContainer;
    BOOL _translucent;
}

 - (BOOL) isTranslucent;
 - (id) topStripView;
 - (void) setTranslucent:(BOOL)a;
 - (void) updateTopStripViewCreateIfNecessary;
 - (void) removeTopStripView;
 - (void) setImage:(id)a;
 - (id) image;


@end
