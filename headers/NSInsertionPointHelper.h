
@interface NSInsertionPointHelper : NSObject {

    {_NSRange="location"Q"length"Q} _charRange;
    q _writingDirection;
    Q _count;
    Q _altCount;
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
