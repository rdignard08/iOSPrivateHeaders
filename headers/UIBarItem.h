
@protocol UIAppearance;
@interface UIBarItem : NSObject <UIAppearance> {

    BOOL _hasCustomizableInstanceAppearanceModifications;
    BOOL _shouldArchiveUIAppearanceTags;
}
@property (nonatomic, assign, readwrite, getter=isEnabled) NSNumber* enabled;
@property (nonatomic, copy, readwrite) NSString* title;
@property (nonatomic, retain, readwrite) UIImage* image;
@property (nonatomic, retain, readwrite) UIImage* landscapeImagePhone;
@property (nonatomic, assign, readwrite) NSNumber* imageInsets;
@property (nonatomic, assign, readwrite) NSNumber* landscapeImagePhoneInsets;
@property (nonatomic, assign, readwrite) NSNumber* tag;
@property (nonatomic, assign, readwrite, setter=_setHasCustomizableInstanceAppearanceModifications:) NSNumber* _hasCustomizableInstanceAppearanceModifications;
@property (nonatomic, assign, readwrite, setter=_setShouldArchiveUIAppearanceTags:) NSNumber* _shouldArchiveUIAppearanceTags;
 + (id) _appearanceWhenContainedIn:(id)a;
 + (id) appearance;
 + (id) _appearanceRecorder;
 + (id) appearanceWhenContainedIn:(Class)a;
 + (id) _appearanceRecorderWhenContainedIn:(Class)a;
 + (id) appearanceForTraitCollection:(id)a;
 + (id) appearanceForTraitCollection:(id)awhenContainedIn:(Class)b;
 + (id) _appearanceBlindViewClasses;

 - (BOOL) _shouldArchiveUIAppearanceTags;
 - (void) _setShouldArchiveUIAppearanceTags:(BOOL)a ;
 - (void) setTitleTextAttributes:(id)a forState:(unsigned long long)b ;
 - (id) titleTextAttributesForState:(unsigned long long)a ;
 - (BOOL) _hasCustomizableInstanceAppearanceModifications;
 - (void) _setHasCustomizableInstanceAppearanceModifications:(BOOL)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
