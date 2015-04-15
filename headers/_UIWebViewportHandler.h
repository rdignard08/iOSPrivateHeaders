
@interface _UIWebViewportHandler : NSObject {

    BOOL _initialConfigurationHasBeenSentToDelegate;
    {_UIWebViewportConfiguration="size"{CGSize="width"d"height"d}"initialScale"f"minimumScale"f"maximumScale"f"allowsUserScaling"B} _defaultConfiguration;
    {_UIWebViewportConfiguration="size"{CGSize="width"d"height"d}"initialScale"f"minimumScale"f"maximumScale"f"allowsUserScaling"B} _configuration;
    unsigned int _webkitDefinedConfigurationFlags;
    {CGSize="width"d"height"d} _availableViewSize;
    BOOL _classicViewportMode;
    <_UIWebViewportHandlerDelegate> _delegate;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _documentBounds;
}
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, assign, readonly) NSNumber* documentBounds;
@property (nonatomic, assign, readonly) NSNumber* availableViewSize;
@property (nonatomic, assign, readonly) NSNumber* initialScale;
@property (nonatomic, assign, readonly) NSNumber* minimumScale;
@property (nonatomic, assign, readonly) NSNumber* maximumScale;
@property (nonatomic, assign, readonly) NSNumber* allowsUserScaling;
@property (nonatomic, assign, readonly) NSNumber* webkitDefinedConfigurationFlags;
@property (nonatomic, assign, readonly, getter=isClassicViewportMode) NSNumber* classicViewportMode;
@property (nonatomic, assign, readonly) NSNumber* rawViewConfiguration;

 - (id) .cxx_construct;
 - (void) setDelegate:(id)a;
 - (double) integralScaleForScale:(double)akeepingPointFixed:(^{CGPoint=dd})b;
 - (float) minimumScaleForViewSize:({CGSize=dd})a;
 - (float) initialScale;
 - (float) maximumScale;
 - (float) minimumScale;
 - (BOOL) allowsUserScaling;
 - ({CGSize=dd}) availableViewSize;
 - (void) clearWebKitViewportConfigurationFlags;
 - (void) resetViewportConfiguration:(r^{_UIWebViewportConfiguration={CGSize=dd}fffB})a;
 - ({_UIWebViewportConfiguration={CGSize=dd}fffB}) rawViewConfiguration;
 - (unsigned int) webkitDefinedConfigurationFlags;
 - (void) update:(@?)a;
 - (void) setDocumentBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (float) viewportWidth;
 - (float) viewportHeight;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) documentBounds;
 - (void) applyWebKitViewportArgumentsSize:({CGSize=dd})ainitialScale:(float)bminimumScale:(float)cmaximumScale:(float)dallowsUserScaling:(float)e;
 - (BOOL) isClassicViewportMode;
 - (void) overrideViewportConfiguration:(r^{_UIWebViewportConfiguration={CGSize=dd}fffB})a;
 - (void) setAvailableViewSize:({CGSize=dd})a;
 - (double) integralInitialScale;
 - (id) delegate;


@end
