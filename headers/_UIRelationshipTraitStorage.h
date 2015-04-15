
@interface _UIRelationshipTraitStorage : _UITraitStorage {

    NSOrderedSet* _relationshipCandidates;
}

 - (void) dealloc;
 - (void) applyRecordsMatchingTraitCollection:(id)a;
 - (id) initWithObject:(id)akeyPath:(id)brelationshipCandidates:(id)c;
 - (void) addRecordWithTraitCollection:(id)aaddedObjects:(id)bremovedObjects:(id)c;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
