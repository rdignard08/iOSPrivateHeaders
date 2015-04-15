
@interface NSRTFReader : NSObject {

    @"NSMutableAttributedString" _topAttributedString;
    @"NSMutableAttributedString" _curAttributedString;
    @"NSMutableArray" _attributesStack;
    @"NSMutableDictionary" _curAttributes;
    I _level;
    @"NSData" _rtfData;
    @"NSMutableDictionary" _fontTable;
    @"NSFileWrapper" _document;
    (?="thin"[128C]"fat"[128S]) _textBuffer;
    Q _textBufferIndex;
    i _rtfVersion;
    i _cocoaVersion;
    i _cocoaSubVersion;
    i _readOnly;
    i _usesScreenFonts;
    I _defaultToUniCharEncoding;
    {_NSAttributeInfo="toUniCharEncoding"I"codePageEncoding"I"font"@"NSFont""fontSize"d"kern"d"paraStyle"@"NSMutableParagraphStyle""bold"b1"italic"b1"fontIsValid"b1"paraStyleIsValid"b1"kernIsValid"b1"attributesSameAsBefore"b1"multiByteEncoding"b1"unicodeAlternativeLength"b3"tabStopType"b4"curAttributesNeedsCopying"b1"paraStyleNeedsCopying"b1"hasWritingDirectionAttribute"b1""b15} _attributeInfo;
    @"NSMutableData" _attributeInfoStack;
    {CGSize="width"d"height"d} _paperSize;
    d _lMargin;
    d _rMargin;
    d _bMargin;
    d _tMargin;
    @"NSMutableDictionary" _documentInfoDictionary;
    {CGSize="width"d"height"d} _viewSize;
    i _viewScale;
    i _viewKind;
    @"NSMapTable" _cachedRTFFontTable;
    d _hyphenationFactor;
    d _defaultTabInterval;
    @"NSColor" _documentBackgroundColor;
    {_NSRTFPriv="reader"^v"rtfInput"*"rtfInputLength"Q"rtfInputLocation"Q"rtfHeaderEndLocation"Q"pushedChar"i"pushedClass"i"pushedMajor"i"pushedMinor"i"pushedParam"i"pushedTextBuf"[1024c]"prevChar"i"bumpLine"i"fontList"^{RTFFont}"colorList"^{RTFColor}"styleList"^{RTFStyle}"inputName"*"outputName"*"ccb"[5^?]"readHook"^?"msgProc"^?"panicProc"^?"textBuf"[1024c]"textLen"i"class"i"major"i"minor"i"param"i"lineNum"q"linePos"q"groupState"i} _private;
    BOOL _textBufferContentsIsFat;
    BOOL _explicitCharSetEncountered;
    BOOL _isRTLDocument;
    q _readLimit;
    q _thumbnailLimit;
    BOOL _limitReached;
    C _textFlow;
    @"NSMutableArray" _layoutOrientationSections;
    Q _verticalOrientationLocation;
    @"NSArray" _textBlocks;
    @"NSMutableArray" _nestedTables;
    @"NSTextTable" _currentTable;
    @"NSTextTable" _previousTable;
    @"NSMutableArray" _currentRowArray;
    @"NSMutableArray" _previousRowArray;
    i _currentRow;
    i _currentColumn;
    i _currentDefinitionColumn;
    BOOL _currentRowIsLast;
    BOOL _setTableCells;
    Q _currentBorderEdge;
    BOOL _currentBorderIsTable;
    @"NSMutableDictionary" _listDefinitions;
    i _currentListNumber;
    i _currentListLevel;
    @"NSCalendar" _gregorianCalendar;
    @"NSMutableDictionary" _fontAttributesTable;
}

 - (id) initWithPath:(id)a;
 - (void) dealloc;
 - (void) finalize;
 - (id) attributedString;
 - (id) defaultParagraphStyle;
 - (void) setMutableAttributedString:(id)a;
 - (id) documentAttributes;
 - (id) initWithRTFDFileWrapper:(id)a;
 - (id) initWithRTF:(id)a;
 - (id) initWithRTFD:(id)a;
 - (void) setReadLimit:(q)a;
 - (void) setThumbnailLimit:(q)a;
 - (void) setUsesScreenFonts:(q)a;
 - (void) setHyphenationFactor:(f)a;
 - (void) setBackgroundColor:(id)a;
 - (id) _currentTable;
 - (void) _setRTFDFileWrapper:(id)a;
 - (q) cocoaVersion;
 - (q) cocoaSubVersion;
 - (void) _ensureTableCells;
 - (id) _mutableParagraphStyle;
 - (void) _pushTableState;
 - (void) _popTableState;
 - (void) _beginTableRow;
 - (void) _setTableCells;
 - (void) _clearTableCells;
 - (d) floatCocoaVersion;
 - (void) _updateAttributes;
 - (id) mutableAttributes;
 - (void) _addListDefinition:(id)aforKey:(q)b;
 - (id) _RTFDFileWrapper;
 - (void) setPaperSize:({CGSize=dd})a;
 - ({CGSize=dd}) paperSize;
 - (void) setViewSize:({CGSize=dd})a;
 - ({CGSize=dd}) viewSize;
 - (void) setViewKind:(q)a;
 - (void) setViewScale:(q)a;
 - (void) setCocoaVersion:(q)a;
 - (void) setCocoaSubVersion:(q)a;
 - (void) setReadOnly:(q)a;
 - (void) setLeftMargin:(d)a;
 - (void) setRightMargin:(d)a;
 - (void) setTopMargin:(d)a;
 - (void) setBottomMargin:(d)a;
 - (void) setTextFlow:(Q)a;
 - (Q) textFlow;
 - (id) _currentTableCell;
 - (Q) _currentBorderEdge;
 - (BOOL) _currentBorderIsTable;
 - (BOOL) _currentTableCellIsPlaceholder;
 - (void) _setCurrentBorderEdge:(Q)aisTable:(BOOL)b;
 - (void) _setTableNestingLevel:(q)a;
 - (void) _startTableRowDefinition;
 - (void) _endTableCellDefinition;
 - (void) _paragraphInTable;
 - (void) _endTableCell;
 - (void) _lastTableRow;
 - (void) _endTableRow;
 - (void) _mergeTableCellsHorizontally;
 - (void) _mergeTableCellsVertically;
 - (id) mutableAttributedString;
 - (id) attributedStringToEndOfGroup;
 - (id) attributesAtEndOfGroup;
 - (id) _documentInfoDictionary;
 - (q) _currentListNumber;
 - (void) _setCurrentListNumber:(q)a;
 - (q) _currentListLevel;
 - (void) _setCurrentListLevel:(q)a;
 - (id) _listDefinitions;
 - (void) _addOverride:(q)aforKey:(q)b;
 - (void) processString:(id)a;
 - (void) _pushState;
 - (void) _popState;
 - (d) defaultTabInterval;
 - (q) baseWritingDirection;
 - (void) setDefaultTabInterval:(d)a;
 - (void) setBaseWritingDirection:(q)a;


@end