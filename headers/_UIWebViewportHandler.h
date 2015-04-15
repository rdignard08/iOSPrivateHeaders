
@interface _UIWebViewportHandler : NSObject {

    BOOL _initialConfigurationHasBeenSentToDelegate;
    {_UIWebViewportConfiguration="size"{CGSize="width"d"height"d}"initialScale"f"minimumScale"f"maximumScale"f"allowsUserScaling"B} _defaultConfiguration;
    {_UIWebViewportConfiguration="size"{CGSize="width"d"height"d}"initialScale"f"minimumScale"f"maximumScale"f"allowsUserScaling"B} _configuration;
    I _webkitDefinedConfigurationFlags;
    {CGSize="width"d"height"d} _availableViewSize;
    BOOL _classicViewportMode;
    @"<_UIWebViewportHandlerDelegate>" _delegate;
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
@property (nonatomic, assign, readonly, isClassicViewportMode) NSNumber* classicViewportMode;
@property (nonatomic, assign, readonly) NSNumber* rawViewConfiguration;

 - (id) .cxx_construct;
 - (void) setDelegate:(id)a;
 - (d) integralScaleForScale:(d)akeepingPointFixed:(^{CGPoint=dd})b;
 - (f) minimumScaleForViewSize:({CGSize=dd})a;
 - (f) initialScale;
 - (f) maximumScale;
 - (f) minimumScale;
 - (BOOL) allowsUserScaling;
 - ({CGSize=dd}) availableViewSize;
 - (void) clearWebKitViewportConfigurationFlags;
 - (void) resetViewportConfiguration:(r^{_UIWebViewportConfiguration={CGSize=dd}fffB})a;
 - ({_UIWebViewportConfiguration={CGSize=dd}fffB}) rawViewConfiguration;
 - (I) webkitDefinedConfigurationFlags;
 - (void) update:(@?)a;
 - (void) setDocumentBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (f) viewportWidth;
 - (f) viewportHeight;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) documentBounds;
 - (void) applyWebKitViewportArgumentsSize:({CGSize=dd})ainitialScale:(f)bminimumScale:(f)cmaximumScale:(f)dallowsUserScaling:(f)e;
 - (BOOL) isClassicViewportMode;
 - (void) overrideViewportConfiguration:(r^{_UIWebViewportConfiguration={CGSize=dd}fffB})a;
 - (void) setAvailableViewSize:({CGSize=dd})a;
 - (d) integralInitialScale;
 - (id) delegate;


@end
