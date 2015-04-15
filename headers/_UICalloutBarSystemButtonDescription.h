
@interface _UICalloutBarSystemButtonDescription : NSObject {

    NSString* m_title;
    UIImage* m_image;
    SEL m_action;
    int m_type;
    @? m_configurationBlock;
}
@property (nonatomic, assign, readonly) NSNumber* action;
@property (nonatomic, copy, readwrite) NSNumber* configurationBlock;
 + (id) buttonDescriptionWithTitle:(id)aaction:(SEL)btype:(int)c;
 + (id) buttonDescriptionWithImage:(id)aaction:(SEL)btype:(int)c;

 - (void) dealloc;
 - (SEL) action;
 - (id) initWithTitle:(id)a orImage:(id)b action:(SEL)c type:(int)d ;
 - (@?) configurationBlock;
 - (id) materializeButtonInView:(id)a ;
 - (void) setConfigurationBlock:(@?)a ;


@end
