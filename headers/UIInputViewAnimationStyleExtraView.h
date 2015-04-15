
@interface UIInputViewAnimationStyleExtraView : NSObject {

    int _clipContainerType;
    int _alignment;
    @"UIView" _view;
    @? _animation;
}
@property (nonatomic, assign, readwrite) NSNumber* clipContainerType;
@property (nonatomic, retain, readwrite) UIView* view;
@property (nonatomic, assign, readwrite) NSNumber* alignment;
@property (nonatomic, copy, readwrite) NSNumber* animation;
 + (id) extraView:(id)awithAlignment:(int)banimation:(@?)conSnapshot:(BOOL)d;

 - (void) dealloc;
 - (void) setView:(id)a;
 - (void) setClipContainerType:(int)a;
 - (int) clipContainerType;
 - (@?) animation;
 - (void) setAnimation:(@?)a;
 - (int) alignment;
 - (void) setAlignment:(int)a;
 - (id) view;


@end
