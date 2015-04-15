
@protocol NSCopying, NSSecureCoding;
@interface UITraitCollection : NSObject <NSCopying, NSSecureCoding> {

    {?="userInterfaceIdiom"q"displayScale"d"touchLevel"q"interactionModel"Q"horizontalSizeClass"q"verticalSizeClass"q} _builtinTraits;
    @"NSDictionary" _clientDefinedTraits;
}
@property (nonatomic, assign, readonly) NSNumber* userInterfaceIdiom;
@property (nonatomic, assign, readonly) NSNumber* displayScale;
@property (nonatomic, assign, readonly) NSNumber* horizontalSizeClass;
@property (nonatomic, assign, readonly) NSNumber* verticalSizeClass;
 + (BOOL) supportsSecureCoding;
 + (id) traitCollectionWithDisplayScale:(double)a;
 + (id) traitCollectionWithHorizontalSizeClass:(long long)a;
 + (id) traitCollectionWithVerticalSizeClass:(long long)a;
 + (id) traitCollectionWithTraitsFromCollections:(id)a;
 + (id) _emptyTraitCollection;
 + (id) traitCollectionWithUserInterfaceIdiom:(long long)a;
 + (id) traitCollectionWithInteractionModel:(unsigned long long)a;
 + (id) traitCollectionWithTouchLevel:(long long)a;
 + (id) _traitCollectionWithValue:(id)aforTraitNamed:(id)b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (long long) userInterfaceIdiom;
 - (long long) verticalSizeClass;
 - (long long) horizontalSizeClass;
 - (id) _initWithBuiltinTraitStorage:(^{?=qdqQqq})aclientDefinedTraits:(id)b;
 - (double) displayScale;
 - (BOOL) containsTraitsInCollection:(id)a;
 - (unsigned long long) interactionModel;
 - (id) _valueForTraitNamed:(id)a;
 - (long long) _compare:(id)a;
 - (id) _namedImageDescription;
 - (BOOL) _matchesIntersectionWithTraitCollection:(id)a;
 - (long long) touchLevel;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
