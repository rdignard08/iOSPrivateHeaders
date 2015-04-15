
@interface UIInputViewSetNotificationInfo : NSObject {

    BOOL _changedAccessoryOnly;
    double _duration;
    unsigned long long _options;
    {CGPoint="x"d"y"d} _beginCenter;
    {CGPoint="x"d"y"d} _endCenter;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _beginFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _endFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _bounds;
}
@property (nonatomic, assign, readonly) NSDictionary* userInfo;
@property (nonatomic, assign, readonly) NSDictionary* privateUserInfo;
@property (nonatomic, assign, readwrite) NSNumber* beginFrame;
@property (nonatomic, assign, readwrite) NSNumber* endFrame;
@property (nonatomic, assign, readwrite) NSNumber* duration;
@property (nonatomic, assign, readwrite) NSNumber* options;
@property (nonatomic, assign, readwrite) NSNumber* changedAccessoryOnly;
@property (nonatomic, assign, readwrite) NSNumber* beginCenter;
@property (nonatomic, assign, readwrite) NSNumber* endCenter;
@property (nonatomic, assign, readwrite) NSNumber* bounds;
 + (id) info;

 - (double) duration;
 - (id) userInfo;
 - (void) setEndFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) beginFrame;
 - (void) setBeginFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) populateStartInfoWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) populateEndInfoWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGPoint=dd}) beginCenter;
 - ({CGPoint=dd}) endCenter;
 - (BOOL) changedAccessoryOnly;
 - (void) setBeginCenter:({CGPoint=dd})a;
 - (void) setEndCenter:({CGPoint=dd})a;
 - (id) inverseInfo;
 - (id) privateUserInfo;
 - (void) logGeometry;
 - (void) populateWithAnimationStyle:(id)a;
 - (void) setChangedAccessoryOnly:(BOOL)a;
 - (void) setOptions:(unsigned long long)a;
 - (unsigned long long) options;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setDuration:(double)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) endFrame;


@end
