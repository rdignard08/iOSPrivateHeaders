
@interface UIWebOverflowScrollViewInfo : NSObject {

    UIWebOverflowScrollView _scrollView;
    CALayer _scrollViewLayer;
    UIView _oldSuperview;
}
@property (nonatomic, retain, readwrite) UIWebOverflowScrollView* scrollView;
@property (nonatomic, retain, readwrite) UIView* oldSuperview;

 - (void) dealloc;
 - (void) setScrollView:(id)a;
 - (id) scrollView;
 - (id) initWithScrollView:(id)a;
 - (id) oldSuperview;
 - (void) setOldSuperview:(id)a;


@end
