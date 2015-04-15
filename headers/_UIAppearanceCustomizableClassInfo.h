
@interface _UIAppearanceCustomizableClassInfo : NSObject {

    BOOL _isGuideClassRoot;
    BOOL _isCustomizableViewClassRoot;
    @"NSString" _appearanceNodeKey;
    unsigned long long _hash;
    Class _customizableViewClass;
    Class _guideClass;
}
@property (nonatomic, assign, readonly) NSObject* _customizableViewClass;
@property (nonatomic, assign, readonly) NSObject* _guideClass;
@property (nonatomic, assign, readonly) NSString* _appearanceNodeKey;
@property (nonatomic, assign, readonly) NSNumber* _hash;
 + (id) _customizableClassInfoForViewClass:(Class)awithGuideClass:(Class)b;

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (Class) _customizableViewClass;
 - (id) _appearanceNodeKey;
 - (Class) _guideClass;
 - (id) _superClassInfo;
 - (unsigned long long) _hash;


@end
