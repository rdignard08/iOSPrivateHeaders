
@interface PRPinyinContext : PRAutocorrectionContext {

    @"NSMutableArray" _modifications;
    @"NSMutableArray" _addedModifications;
    @"NSMutableArray" _removedModifications;
    @"NSMutableArray" _addedRemovedModifications;
    @"NSMutableArray" _prefixes;
    * _buffer;
    * _altBuffer;
    * _altBufferScores;
    @"NSMutableArray" _geometryDataArray;
    ^Q _syllableLengthArray;
    ^v _connection;
    Q _length;
    Q _lengthBeforeApostrophes;
    Q _startingPoint;
    [4Q] _lastIndexes;
    [2Q] _nextIndexes;
    Q _startIndex;
    Q _endIndex;
    Q _abbreviatedSyllableCount;
    Q _previouslyAnalyzedLength;
    d _validSequenceCorrectionThreshold;
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
 - (id) prefixes;
 - (void) setValidSequenceCorrectionThreshold:(d)a;
 - (d) validSequenceCorrectionThreshold;
 - (BOOL) _addEnglishWordForRange:({_NSRange=QQ})aquickly:(BOOL)b;
 - (BOOL) _addEnglishWordsEndingAtIndex:(Q)aquickly:(BOOL)b;
 - (void) _addSpecialEnglishWords;
 - (void) _addEnglishWordsQuickly:(BOOL)a;
 - (void) _addValidSequenceReplacements;
 - (void) _removePrefixes;
 - (void) _addPrefixes;


@end
