
@interface PRPinyinContext : PRAutocorrectionContext {

    NSMutableArray* _modifications;
    NSMutableArray* _addedModifications;
    NSMutableArray* _removedModifications;
    NSMutableArray* _addedRemovedModifications;
    NSMutableArray* _prefixes;
    char* _buffer;
    char* _altBuffer;
    char* _altBufferScores;
    NSMutableArray* _geometryDataArray;
    ^Q _syllableLengthArray;
    ^v _connection;
    unsigned long long _length;
    unsigned long long _lengthBeforeApostrophes;
    unsigned long long _startingPoint;
    [4Q] _lastIndexes;
    [2Q] _nextIndexes;
    unsigned long long _startIndex;
    unsigned long long _endIndex;
    unsigned long long _abbreviatedSyllableCount;
    unsigned long long _previouslyAnalyzedLength;
    double _validSequenceCorrectionThreshold;
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
 - (void) addInputCharacter:(unsigned short)ageometryModel:(^v)bgeometryData:(id)c;
 - (void) _addInsertions;
 - (void) removeNumberOfInputCharacters:(unsigned long long)a;
 - (id) currentModifications;
 - (id) addedModifications;
 - (id) removedModifications;
 - (id) prefixes;
 - (void) setValidSequenceCorrectionThreshold:(double)a;
 - (double) validSequenceCorrectionThreshold;
 - (BOOL) _addEnglishWordForRange:({_NSRange=QQ})aquickly:(BOOL)b;
 - (BOOL) _addEnglishWordsEndingAtIndex:(unsigned long long)aquickly:(BOOL)b;
 - (void) _addSpecialEnglishWords;
 - (void) _addEnglishWordsQuickly:(BOOL)a;
 - (void) _addValidSequenceReplacements;
 - (void) _removePrefixes;
 - (void) _addPrefixes;


@end
