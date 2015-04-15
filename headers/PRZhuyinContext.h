
@interface PRZhuyinContext : PRAutocorrectionContext {

    @"NSMutableArray" _modifications;
    @"NSMutableArray" _addedModifications;
    @"NSMutableArray" _removedModifications;
    @"NSMutableArray" _addedRemovedModifications;
    @"NSMutableArray" _prefixes;
    * _buffer;
    ^Q _syllableLengthArray;
    ^v _connection;
    Q _length;
    Q _lengthBeforeApostrophes;
    Q _startingPoint;
    [4Q] _lastIndexes;
    [2Q] _nextIndexes;
    Q _startIndex;
    Q _endIndex;
    BOOL _lastSyllableIsPartial;
}

 - (void) reset;
 - (id) description;
 - (void) dealloc;
 - (id) init;
 - (void) _removeModificationsAndMoveStartingPoint;
 - (void) _advanceIndexes;
 - (void) _addTranspositions;
 - (void) _addReplacements;
 - (void) _addDeletions;
 - (void) _filterModifications;
 - (void) addInputCharacter:(S)ageometryModel:(^v)bgeometryData:(id)c;
 - (void) _addInsertions;
 - (void) removeNumberOfInputCharacters:(Q)a;
 - (id) currentModifications;
 - (id) addedModifications;
 - (id) removedModifications;


@end
