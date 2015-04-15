
@protocol _UIScrollNotification;
@interface _UISearchControllerDidScrollDelegate : NSObject <_UIScrollNotification> {

    UIScrollView* _scrollView;
    <_UIScrollNotification>* _controller;
}
@property (nonatomic, assign, readwrite) NSNumber* controller;
@property (nonatomic, assign, readwrite) UIScrollView* scrollView;

 - (void) dealloc;
 - (void) _updateBackdropMaskViewsInScrollView:(id)a ;
 - (void) _didScroll;
 - (void) setScrollView:(id)a ;
 - (id) scrollView;
 - (id) controller;
 - (void) setController:(id)a ;


@end
