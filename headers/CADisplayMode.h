
@interface CADisplayMode : NSObject {

    ^v _priv;
    @"CADisplay" _dpy;
    Q _width;
    Q _height;
}
@property (nonatomic, assign, readonly) NSNumber* width;
@property (nonatomic, assign, readonly) NSNumber* height;
@property (nonatomic, assign, readonly) NSNumber* pixelAspectRatio;
 + (id) _displayModeWithMode:(i)adisplay:(id)b;

 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) _display;
 - (i) _mode;
 - (id) _initWithMode:(i)adisplay:(id)b;
 - (d) pixelAspectRatio;
 - (void) _setWidth:(Q)aheight:(Q)b;
 - (Q) width;
 - (Q) height;


@end
