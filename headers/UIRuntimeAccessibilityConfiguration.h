
@interface UIRuntimeAccessibilityConfiguration : NSObject {

    @"NSString" accessibilityConfigurationHint;
    @"NSString" accessibilityConfigurationLabel;
    @"NSNumber" accessibilityConfigurationTraits;
    @"NSNumber" isAccessibilityConfigurationElement;
    @"NSObject" object;
}
@property (nonatomic, retain, readwrite) NSString* accessibilityConfigurationHint;
@property (nonatomic, retain, readwrite) NSString* accessibilityConfigurationLabel;
@property (nonatomic, retain, readwrite) NSNumber* accessibilityConfigurationTraits;
@property (nonatomic, retain, readwrite) NSNumber* isAccessibilityConfigurationElement;
@property (nonatomic, retain, readwrite) NSObject* object;

 - (void) dealloc;
 - (id) object;
 - (void) setObject:(id)a;
 - (void) applyConfiguration;
 - (id) initWithObject:(id)alabel:(id)bhint:(id)ctraits:(id)dandIsAccessibilityElement:(id)e;
 - (id) accessibilityConfigurationHint;
 - (void) setAccessibilityConfigurationHint:(id)a;
 - (id) accessibilityConfigurationLabel;
 - (void) setAccessibilityConfigurationLabel:(id)a;
 - (id) accessibilityConfigurationTraits;
 - (void) setAccessibilityConfigurationTraits:(id)a;
 - (id) isAccessibilityConfigurationElement;
 - (void) setIsAccessibilityConfigurationElement:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
