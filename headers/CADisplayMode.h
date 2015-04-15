
@interface CADisplayMode : NSObject {

    ^v _priv;
    CADisplay _dpy;
    unsigned long long _width;
    unsigned long long _height;
}
@property (nonatomic, assign, readonly) NSNumber* width;
@property (nonatomic, assign, readonly) NSNumber* height;
@property (nonatomic, assign, readonly) NSNumber* pixelAspectRatio;
 + (id) _displayModeWithMode:(int)adisplay:(id)b;

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) _display;
 - (int) _mode;
 - (id) _initWithMode:(int)adisplay:(id)b;
 - (double) pixelAspectRatio;
 - (void) _setWidth:(unsigned long long)aheight:(unsigned long long)b;
 - (unsigned long long) width;
 - (unsigned long long) height;


@end
