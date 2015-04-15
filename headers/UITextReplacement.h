
@interface UITextReplacement : NSObject {

    @"UITextRange" _range;
    @"NSString" _originalText;
    @"NSString" _replacementText;
    @"NSString" _menuTitle;
    I _usageTrackingMask;
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
 - (I) usageTrackingMask;
 - (void) setUsageTrackingMask:(I)a;
 - (id) menuTitle;
 - (id) range;


@end
