
@interface _UIRelationshipTraitStorage : _UITraitStorage {

    NSOrderedSet* _relationshipCandidates;
}

 - (void) dealloc;
 - (void) applyRecordsMatchingTraitCollection:(id)a ;
 - (id) initWithObject:(id)a keyPath:(id)b relationshipCandidates:(id)c ;
 - (void) addRecordWithTraitCollection:(id)a addedObjects:(id)b removedObjects:(id)c ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
