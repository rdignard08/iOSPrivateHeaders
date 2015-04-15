
@interface NSInsertionPointHelper : NSObject {

    {_NSRange="location"Q"length"Q} _charRange;
    long long _writingDirection;
    unsigned long long _count;
    unsigned long long _altCount;
    ^d _logicalPositions;
    ^d _logicalLeftBoundaries;
    ^d _logicalRightBoundaries;
    ^Q _logicalCharIndexes;
    ^d _displayPositions;
    ^Q _displayCharIndexes;
    ^d _logicalAltPositions;
    ^Q _logicalAltCharIndexes;
    ^d _displayAltPositions;
    ^Q _displayAltCharIndexes;
}

 - (void) dealloc;


@end
