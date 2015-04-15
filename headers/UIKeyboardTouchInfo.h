
@interface UIKeyboardTouchInfo : NSObject {

    UITouch* _touch;
    UIKBTree* _key;
    UIKBTree* _keyplane;
    UIKBTree* _slidOffKey;
    {CGPoint="x"d"y"d} _initialPoint;
    {CGPoint="x"d"y"d} _initialDragPoint;
    BOOL _dragged;
    int _stage;
    BOOL _maySuppressUpAction;
    int _initialKeyState;
}
@property (nonatomic, retain, readwrite) UITouch* touch;
@property (nonatomic, retain, readwrite) UIKBTree* key;
@property (nonatomic, retain, readwrite) UIKBTree* keyplane;
@property (nonatomic, retain, readwrite) UIKBTree* slidOffKey;
@property (nonatomic, assign, readwrite) NSNumber* initialPoint;
@property (nonatomic, assign, readwrite) NSNumber* initialDragPoint;
@property (nonatomic, assign, readwrite) NSNumber* dragged;
@property (nonatomic, assign, readwrite) NSNumber* stage;
@property (nonatomic, assign, readwrite) NSNumber* maySuppressUpAction;
@property (nonatomic, assign, readwrite) NSNumber* initialKeyState;

 - (void) setKey:(id)a ;
 - (void) dealloc;
 - (id) touch;
 - (void) setTouch:(id)a ;
 - (void) setKeyplane:(id)a ;
 - (void) setSlidOffKey:(id)a ;
 - (id) keyplane;
 - (id) slidOffKey;
 - ({CGPoint=dd}) initialPoint;
 - (void) setInitialPoint:({CGPoint=dd})a ;
 - (void) setStage:(int)a ;
 - ({CGPoint=dd}) initialDragPoint;
 - (void) setInitialDragPoint:({CGPoint=dd})a ;
 - (BOOL) dragged;
 - (void) setDragged:(BOOL)a ;
 - (BOOL) maySuppressUpAction;
 - (void) setMaySuppressUpAction:(BOOL)a ;
 - (int) initialKeyState;
 - (void) setInitialKeyState:(int)a ;
 - (id) key;
 - (int) stage;


@end
