
@interface NSHTMLReader : NSObject {

    NSMutableAttributedString* _attrStr;
    NSMutableDictionary* _documentAttrs;
    NSData* _data;
    NSURL* _baseURL;
    NSDictionary* _options;
    WebView* _webView;
    id _webDelegate;
    DOMDocument* _document;
    DOMRange* _domRange;
    NSMutableArray* _domStartAncestors;
    WebDataSource* _dataSource;
    NSString* _standardFontFamily;
    double _textSizeMultiplier;
    double _webViewTextSizeMultiplier;
    double _defaultTabInterval;
    double _defaultFontSize;
    double _minimumFontSize;
    NSMutableArray* _textLists;
    NSMutableArray* _textBlocks;
    NSMutableArray* _textTables;
    NSMutableDictionary* _textTableFooters;
    NSMutableArray* _textTableSpacings;
    NSMutableArray* _textTablePaddings;
    NSMutableArray* _textTableRows;
    NSMutableArray* _textTableRowArrays;
    NSMutableArray* _textTableRowBackgroundColors;
    NSMutableDictionary* _computedStylesForElements;
    NSMutableDictionary* _specifiedStylesForElements;
    NSMutableDictionary* _stringsForNodes;
    NSMutableDictionary* _floatsForNodes;
    NSMutableDictionary* _colorsForNodes;
    NSMutableDictionary* _attributesForElements;
    NSMutableDictionary* _elementIsBlockLevel;
    NSMutableDictionary* _fontCache;
    NSMutableArray* _writingDirectionArray;
    long long _domRangeStartIndex;
    long long _indexingLimit;
    long long _thumbnailLimit;
    long long _errorCode;
    long long _quoteLevel;
    {?="isSoft"b1"reachedStart"b1"reachedEnd"b1"isIndexing"b1"isTesting"b1"hasTrailingNewline"b1"pad"b26} _flags;
}
 + (void) initialize;
 + (id) defaultParagraphStyle;

 - (void) dealloc;
 - (id) attributedString;
 - (void) setMutableAttributedString:(id)a ;
 - (id) documentAttributes;
 - (id) initWithDOMRange:(id)a ;
 - (id) initWithData:(id)a options:(id)b ;
 - (id) _computedStyleForElement:(id)a ;
 - (id) _specifiedStyleForElement:(id)a ;
 - (id) _stringForNode:(id)a property:(id)b ;
 - (id) _computedStringForNode:(id)a property:(id)b ;
 - (BOOL) _getFloat:(^d)a forNode:(id)b property:(id)c ;
 - (BOOL) _getComputedFloat:(^d)a forNode:(id)b property:(id)c ;
 - (BOOL) _elementIsBlockLevel:(id)a ;
 - (id) _blockLevelElementForNode:(id)a ;
 - (BOOL) _elementHasOwnBackgroundColor:(id)a ;
 - (id) _colorForNode:(id)a property:(id)b ;
 - (id) _computedColorForNode:(id)a property:(id)b ;
 - (id) _computedAttributesForElement:(id)a ;
 - (id) _attributesForElement:(id)a ;
 - (Class) _WebMessageDocumentClass;
 - (Class) _DOMHTMLTableCellElementClass;
 - (id) _childrenForNode:(id)a ;
 - (void) _processMetaElementWithName:(id)a content:(id)b ;
 - (void) _processHeadElement:(id)a ;
 - (void) _newParagraphForElement:(id)a tag:(id)b allowEmpty:(BOOL)c suppressTrailingSpace:(BOOL)d isEntering:(BOOL)e ;
 - (void) _fillInBlock:(id)a forElement:(id)b backgroundColor:(id)c extraMargin:(double)d extraPadding:(double)e isTable:(BOOL)f ;
 - (void) _addTableCellForElement:(id)a ;
 - (void) _addTableForElement:(id)a ;
 - (BOOL) _addAttachmentForElement:(id)a URL:(id)b needsParagraph:(BOOL)c usePlaceholder:(BOOL)d ;
 - (void) _traverseNode:(id)a depth:(long long)b embedded:(BOOL)c ;
 - (void) _newLineForElement:(id)a ;
 - (void) _addQuoteForElement:(id)a opening:(BOOL)b level:(long long)c ;
 - (void) _addValue:(id)a forElement:(id)b ;
 - (void) _newTabForElement:(id)a ;
 - (void) _traverseFooterNode:(id)a depth:(long long)b ;
 - (void) _addMarkersToList:(id)a range:({_NSRange=QQ})b ;
 - (BOOL) _enterElement:(id)a tag:(id)b display:(id)c depth:(long long)d embedded:(BOOL)e ;
 - (BOOL) _processElement:(id)a tag:(id)b display:(id)c depth:(long long)d ;
 - (void) _exitElement:(id)a tag:(id)b display:(id)c depth:(long long)d startIndex:(unsigned long long)e ;
 - (void) _processText:(id)a ;
 - (BOOL) _sanitizeWebArchiveDictionary:(id)a ;
 - (BOOL) _sanitizeWebArchiveArray:(id)a ;
 - (Class) _webArchiveClass;
 - (Class) _webViewClass;
 - (id) _createWebArchiveForData:(id)a ;
 - (id) _webPreferences;
 - (void) _parseNode:(id)a ;
 - (void) _adjustTrailingNewline;
 - (void) _loadUsingWebKit;
 - (void) _loadFromDOMRange;
 - (void) _loadUsingWebKitOnMainThread;
 - (void) _load;
 - (id) initWithPath:(id)a options:(id)b ;


@end
