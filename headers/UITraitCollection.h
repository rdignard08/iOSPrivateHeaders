
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
 + (id) traitCollectionWithDisplayScale:(d)a;
 + (id) traitCollectionWithHorizontalSizeClass:(q)a;
 + (id) traitCollectionWithVerticalSizeClass:(q)a;
 + (id) traitCollectionWithTraitsFromCollections:(id)a;
 + (id) _emptyTraitCollection;
 + (id) traitCollectionWithUserInterfaceIdiom:(q)a;
 + (id) traitCollectionWithInteractionModel:(Q)a;
 + (id) traitCollectionWithTouchLevel:(q)a;
 + (id) _traitCollectionWithValue:(id)aforTraitNamed:(id)b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (q) userInterfaceIdiom;
 - (q) verticalSizeClass;
 - (q) horizontalSizeClass;
 - (id) _initWithBuiltinTraitStorage:(^{?=qdqQqq})aclientDefinedTraits:(id)b;
 - (d) displayScale;
 - (BOOL) containsTraitsInCollection:(id)a;
 - (Q) interactionModel;
 - (id) _valueForTraitNamed:(id)a;
 - (q) _compare:(id)a;
 - (id) _namedImageDescription;
 - (BOOL) _matchesIntersectionWithTraitCollection:(id)a;
 - (q) touchLevel;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
