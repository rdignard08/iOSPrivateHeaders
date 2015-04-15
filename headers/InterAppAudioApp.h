
@interface InterAppAudioApp : NSObject {

    BOOL _isHost;
    BOOL _isCurrentApp;
    long long _key;
    NSString* _name;
    UIImage* _icon;
    NSURL* _url;
}
@property (nonatomic, assign, readonly) NSNumber* key;
@property (nonatomic, assign, readonly) NSString* name;
@property (nonatomic, assign, readonly) UIImage* icon;
@property (nonatomic, assign, readonly) NSURL* url;
@property (nonatomic, assign, readonly) NSNumber* isHost;
@property (nonatomic, assign, readonly) NSNumber* isCurrentApp;

 - (id) description;
 - (void) dealloc;
 - (id) name;
 - (long long) key;
 - (id) url;
 - (id) init:(r^{InterAppAudioAppInfo=Bi^{ObjCUIImage}^{__CFString}^{__CFString}^{__CFURL}})a iconSize:(float)b ;
 - (id) icon;
 - (BOOL) isHost;
 - (BOOL) isCurrentApp;


@end
