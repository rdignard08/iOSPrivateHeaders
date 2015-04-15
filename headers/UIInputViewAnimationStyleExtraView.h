
@interface UIInputViewAnimationStyleExtraView : NSObject {

    i _clipContainerType;
    i _alignment;
    @"UIView" _view;
    @? _animation;
}
@property (nonatomic, assign, readwrite) NSNumber* clipContainerType;
@property (nonatomic, retain, readwrite) UIView* view;
@property (nonatomic, assign, readwrite) NSNumber* alignment;
@property (nonatomic, copy, readwrite) NSNumber* animation;
 + (id) extraView:(id)awithAlignment:(i)banimation:(@?)conSnapshot:(BOOL)d;

 - (void) dealloc;
 - (void) setView:(id)a;
 - (void) setClipContainerType:(i)a;
 - (i) clipContainerType;
 - (@?) animation;
 - (void) setAnimation:(@?)a;
 - (i) alignment;
 - (void) setAlignment:(i)a;
 - (id) view;


@end
