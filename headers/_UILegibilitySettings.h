
@interface _UILegibilitySettings : NSObject {

    long long _style;
    UIColor _contentColor;
    UIColor _primaryColor;
    UIColor _secondaryColor;
    UIColor _shadowColor;
    double _shadowRadius;
    double _shadowAlpha;
    double _imageOutset;
    double _minFillHeight;
    NSString _shadowCompositingFilterName;
}
@property (nonatomic, assign, readwrite) NSNumber* style;
@property (nonatomic, retain, readwrite) UIColor* contentColor;
@property (nonatomic, retain, readwrite) UIColor* primaryColor;
@property (nonatomic, retain, readwrite) UIColor* secondaryColor;
@property (nonatomic, retain, readwrite) UIColor* shadowColor;
@property (nonatomic, assign, readwrite) NSNumber* shadowRadius;
@property (nonatomic, assign, readwrite) NSNumber* shadowAlpha;
@property (nonatomic, assign, readwrite) NSNumber* imageOutset;
@property (nonatomic, assign, readwrite) NSNumber* minFillHeight;
@property (nonatomic, copy, readwrite) NSString* shadowCompositingFilterName;
 + (id) sharedInstanceForStyle:(long long)a;

 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (id) initWithStyle:(long long)a;
 - (id) primaryColor;
 - (void) setContentColor:(id)a;
 - (id) contentColor;
 - (id) initWithStyle:(long long)acontentColor:(id)b;
 - (void) setMinFillHeight:(double)a;
 - (void) setPropertiesForStyle:(long long)a;
 - (void) setPrimaryColor:(id)a;
 - (void) setSecondaryColor:(id)a;
 - (void) setShadowAlpha:(double)a;
 - (void) setImageOutset:(double)a;
 - (void) setShadowCompositingFilterName:(id)a;
 - (id) initWithContentColor:(id)a;
 - (id) initWithContentColor:(id)acontrast:(double)b;
 - (id) initWithStyle:(long long)aprimaryColor:(id)bsecondaryColor:(id)cshadowColor:(id)d;
 - (id) secondaryColor;
 - (double) shadowAlpha;
 - (double) imageOutset;
 - (double) minFillHeight;
 - (id) shadowCompositingFilterName;
 - (void) setShadowColor:(id)a;
 - (long long) style;
 - (double) shadowRadius;
 - (id) shadowColor;
 - (void) setStyle:(long long)a;
 - (void) setShadowRadius:(double)a;


@end
