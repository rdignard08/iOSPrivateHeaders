
@interface UIScreenMode : NSObject {

    id _mode;
    BOOL _mainScreen;
}
@property (nonatomic, assign, readonly) NSNumber* size;
@property (nonatomic, assign, readonly) NSNumber* pixelAspectRatio;
@property (atomic, assign, readwrite) NSNumber* _mainScreen;
 + (id) _screenModeForDisplayMode:(id)amainScreen:(BOOL)b;

 - ({CGSize=dd}) size;
 - (id) description;
 - (BOOL) _isNTSCOrPAL;
 - (id) _displayMode;
 - (id) initWithDisplayMode:(id)a mainScreen:(BOOL)b ;
 - ({CGSize=dd}) _sizeWithLevel:(unsigned long long)a ;
 - (BOOL) _mainScreen;
 - (void) set_mainScreen:(BOOL)a ;
 - (double) pixelAspectRatio;


@end
