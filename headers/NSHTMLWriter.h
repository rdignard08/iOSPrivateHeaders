
@interface NSHTMLWriter : NSObject {

    NSAttributedString _attrStr;
    NSDictionary _documentAttrs;
    NSData _htmlData;
    NSMutableString _bodyStr;
    NSFileWrapper _fileWrapper;
    NSMutableDictionary _subresources;
    NSData _webArchiveData;
    NSMutableArray _paraStyleStrings;
    NSMutableArray _paraStyleArrays;
    NSMutableIndexSet _paraStyleIndexes;
    NSMutableIndexSet _listItemStyleIndexes;
    NSMutableOrderedSet _charStyleStrings;
    NSMutableArray _charStyleArrays;
    NSMutableArray _fontStrings;
    NSMutableArray _tableStyleStrings;
    NSMutableArray _tableCellStyleStrings;
    NSMutableArray _blockStyleStrings;
    NSMutableArray _olistStyleStrings;
    NSMutableArray _ulistStyleStrings;
    NSMutableDictionary _fontNames;
    NSMutableDictionary _fontDescriptions;
    long long _level;
    long long _prefixSpaces;
    NSString _textEncodingName;
    unsigned long long _characterEncoding;
    NSURL _outputBaseURL;
    id _resourceHandler;
    unsigned int _excludedElements1;
    unsigned int _excludedElements2;
    {?="interchangeNewline"b1"noDefaultFonts"b1"tabsToSpaces"b1"coalesceTabSpans"b1"usedTabSpan"b1"encodingIsUnicode"b1"pad"b26} _flags;
}

 - (id) initWithAttributedString:(id)a;
 - (void) dealloc;
 - (void) setDocumentAttributes:(id)a;
 - (id) HTMLData;
 - (id) webArchiveData;
 - (id) HTMLFileWrapper;
 - (void) readDocumentFragment:(id)a;
 - (id) subresources;
 - (id) documentFragmentForDocument:(id)a;
 - (Class) _webArchiveClass;
 - (id) _defaultValueForAttribute:(id)arange:({_NSRange=QQ})b;
 - (id) _prefix;
 - (void) _writeDocumentProperty:(id)avalue:(id)btoString:(id)c;
 - (unsigned long long) _blockClassForBlock:(id)a;
 - (id) _prefixUp;
 - (id) _prefixDown;
 - (unsigned long long) _listClassForList:(id)a;
 - (BOOL) _isStrictByParsingExcludedElements;
 - (unsigned long long) _spanClassForAttributes:(id)ainParagraphClass:(unsigned long long)bspanClass:(unsigned long long)cflags:(^Q)d;
 - (void) _closeFlags:(unsigned long long)aopenFlags:(unsigned long long)binString:(id)c;
 - (unsigned long long) _paragraphClassforParagraphStyle:(id)arange:({_NSRange=QQ})bisEmpty:(BOOL)cisCompletelyEmpty:(BOOL)dheaderString:(^@)ealignmentString:(^@)fdirectionString:(^@)g;
 - (void) _openBlocksForParagraphStyle:(id)aatIndex:(unsigned long long)binString:(id)c;
 - (void) _openListsForParagraphStyle:(id)aatIndex:(unsigned long long)binString:(id)cisStrict:(BOOL)d;
 - (void) _appendAttachment:(id)aatIndex:(unsigned long long)btoString:(id)c;
 - (BOOL) _closeListsForParagraphStyle:(id)aatIndex:(unsigned long long)binString:(id)c;
 - (BOOL) _closeBlocksForParagraphStyle:(id)aatIndex:(unsigned long long)binString:(id)c;
 - (void) _writeDocumentPropertiesToString:(id)a;
 - (void) _prepareString:(id)aforConversionToEncoding:(unsigned long long)b;
 - (void) _generateHTML;
 - (id) webArchive;
 - (void) _createWebArchiveData;


@end
