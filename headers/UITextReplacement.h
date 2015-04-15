
@interface UITextReplacement : NSObject {

    UITextRange _range;
    NSString _originalText;
    NSString _replacementText;
    NSString _menuTitle;
    unsigned int _usageTrackingMask;
}
@property (nonatomic, assign, readonly) UITextRange* range;
@property (nonatomic, assign, readonly) NSString* originalText;
@property (nonatomic, assign, readonly) NSString* replacementText;
@property (nonatomic, assign, readonly) NSString* menuTitle;
@property (nonatomic, assign, readwrite) NSNumber* usageTrackingMask;
 + (id) replacementWithRange:(id)aoriginal:(id)breplacement:(id)cmenuTitle:(id)d;

 - (void) dealloc;
 - (id) replacementText;
 - (id) originalText;
 - (unsigned int) usageTrackingMask;
 - (void) setUsageTrackingMask:(unsigned int)a;
 - (id) menuTitle;
 - (id) range;


@end
