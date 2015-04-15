
@interface _UILegibilitySettings : NSObject {

    q _style;
    @"UIColor" _contentColor;
    @"UIColor" _primaryColor;
    @"UIColor" _secondaryColor;
    @"UIColor" _shadowColor;
    d _shadowRadius;
    d _shadowAlpha;
    d _imageOutset;
    d _minFillHeight;
    @"NSString" _shadowCompositingFilterName;
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
 + (id) sharedInstanceForStyle:(q)a;

 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (id) initWithStyle:(q)a;
 - (id) primaryColor;
 - (void) setContentColor:(id)a;
 - (id) contentColor;
 - (id) initWithStyle:(q)acontentColor:(id)b;
 - (void) setMinFillHeight:(d)a;
 - (void) setPropertiesForStyle:(q)a;
 - (void) setPrimaryColor:(id)a;
 - (void) setSecondaryColor:(id)a;
 - (void) setShadowAlpha:(d)a;
 - (void) setImageOutset:(d)a;
 - (void) setShadowCompositingFilterName:(id)a;
 - (id) initWithContentColor:(id)a;
 - (id) initWithContentColor:(id)acontrast:(d)b;
 - (id) initWithStyle:(q)aprimaryColor:(id)bsecondaryColor:(id)cshadowColor:(id)d;
 - (id) secondaryColor;
 - (d) shadowAlpha;
 - (d) imageOutset;
 - (d) minFillHeight;
 - (id) shadowCompositingFilterName;
 - (void) setShadowColor:(id)a;
 - (q) style;
 - (d) shadowRadius;
 - (id) shadowColor;
 - (void) setStyle:(q)a;
 - (void) setShadowRadius:(d)a;


@end
