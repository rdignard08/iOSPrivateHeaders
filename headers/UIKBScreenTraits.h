
@interface UIKBScreenTraits : NSObject {

    BOOL _knobInput;
    UIScreen _screen;
    long long _orientation;
    double _keyboardWidth;
}
@property (nonatomic, assign, readonly) UIScreen* screen;
@property (nonatomic, assign, readonly) NSNumber* idiom;
@property (nonatomic, assign, readonly) NSNumber* knobInput;
@property (nonatomic, assign, readwrite) NSNumber* orientation;
@property (nonatomic, assign, readwrite) NSNumber* keyboardWidth;
 + (id) traitsWithScreen:(id)aorientation:(long long)b;

 - (id) initWithScreen:(id)aorientation:(long long)b;
 - (BOOL) knobInput;
 - (double) keyboardWidth;
 - (void) setKeyboardWidth:(double)a;
 - (id) screen;
 - (long long) idiom;
 - (long long) orientation;
 - (void) setOrientation:(long long)a;


@end
