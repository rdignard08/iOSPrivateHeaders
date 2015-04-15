
@interface UIKBScreenTraits : NSObject {

    BOOL _knobInput;
    @"UIScreen" _screen;
    q _orientation;
    d _keyboardWidth;
}
@property (nonatomic, assign, readonly) UIScreen* screen;
@property (nonatomic, assign, readonly) NSNumber* idiom;
@property (nonatomic, assign, readonly) NSNumber* knobInput;
@property (nonatomic, assign, readwrite) NSNumber* orientation;
@property (nonatomic, assign, readwrite) NSNumber* keyboardWidth;
 + (id) traitsWithScreen:(id)aorientation:(q)b;

 - (id) initWithScreen:(id)aorientation:(q)b;
 - (BOOL) knobInput;
 - (d) keyboardWidth;
 - (void) setKeyboardWidth:(d)a;
 - (id) screen;
 - (q) idiom;
 - (q) orientation;
 - (void) setOrientation:(q)a;


@end
