
@interface NSHTMLWriter : NSObject {

    @"NSAttributedString" _attrStr;
    @"NSDictionary" _documentAttrs;
    @"NSData" _htmlData;
    @"NSMutableString" _bodyStr;
    @"NSFileWrapper" _fileWrapper;
    @"NSMutableDictionary" _subresources;
    @"NSData" _webArchiveData;
    @"NSMutableArray" _paraStyleStrings;
    @"NSMutableArray" _paraStyleArrays;
    @"NSMutableIndexSet" _paraStyleIndexes;
    @"NSMutableIndexSet" _listItemStyleIndexes;
    @"NSMutableOrderedSet" _charStyleStrings;
    @"NSMutableArray" _charStyleArrays;
    @"NSMutableArray" _fontStrings;
    @"NSMutableArray" _tableStyleStrings;
    @"NSMutableArray" _tableCellStyleStrings;
    @"NSMutableArray" _blockStyleStrings;
    @"NSMutableArray" _olistStyleStrings;
    @"NSMutableArray" _ulistStyleStrings;
    @"NSMutableDictionary" _fontNames;
    @"NSMutableDictionary" _fontDescriptions;
    q _level;
    q _prefixSpaces;
    @"NSString" _textEncodingName;
    Q _characterEncoding;
    @"NSURL" _outputBaseURL;
    id _resourceHandler;
    I _excludedElements1;
    I _excludedElements2;
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
 - (Q) _blockClassForBlock:(id)a;
 - (id) _prefixUp;
 - (id) _prefixDown;
 - (Q) _listClassForList:(id)a;
 - (BOOL) _isStrictByParsingExcludedElements;
 - (Q) _spanClassForAttributes:(id)ainParagraphClass:(Q)bspanClass:(Q)cflags:(^Q)d;
 - (void) _closeFlags:(Q)aopenFlags:(Q)binString:(id)c;
 - (Q) _paragraphClassforParagraphStyle:(id)arange:({_NSRange=QQ})bisEmpty:(BOOL)cisCompletelyEmpty:(BOOL)dheaderString:(^@)ealignmentString:(^@)fdirectionString:(^@)g;
 - (void) _openBlocksForParagraphStyle:(id)aatIndex:(Q)binString:(id)c;
 - (void) _openListsForParagraphStyle:(id)aatIndex:(Q)binString:(id)cisStrict:(BOOL)d;
 - (void) _appendAttachment:(id)aatIndex:(Q)btoString:(id)c;
 - (BOOL) _closeListsForParagraphStyle:(id)aatIndex:(Q)binString:(id)c;
 - (BOOL) _closeBlocksForParagraphStyle:(id)aatIndex:(Q)binString:(id)c;
 - (void) _writeDocumentPropertiesToString:(id)a;
 - (void) _prepareString:(id)aforConversionToEncoding:(Q)b;
 - (void) _generateHTML;
 - (id) webArchive;
 - (void) _createWebArchiveData;


@end
