
@interface NSRTFWriter : NSObject {

    NSMutableData* _output;
    NSAttributedString* _attrString;
    unsigned long long _attrStringLength;
    NSFileWrapper* _document;
    NSMutableDictionary* _fontNames;
    NSMutableDictionary* _colors;
    NSMutableArray* _listRanges;
    id _curFont;
    id _curForegroundColor;
    id _curBackgroundColor;
    id _curParagraphStyle;
    id _curKern;
    id _curBaselineOffset;
    id _curSuperscript;
    id _curUnderlineStyle;
    int _curTraits;
    unsigned int _curEncoding;
    {?="_forceColorWrite"b1"_activeFontFeatures"b1"_preserveNaturalAlignment"b1"_reserved"b29} _rwFlags;
    double _rightMargin;
    NSDictionary* _docAttrs;
    ^v _layoutSections;
}
 + (void) initialize;
 + (id) RTFDataForString:(id)arange:({_NSRange=QQ})bencoding:(unsigned int)c;
 + (id) RTFDataForDate:(id)a;

 - (id) initWithAttributedString:(id)a ;
 - (void) dealloc;
 - (void) setDocumentAttributes:(id)a ;
 - (id) RTF;
 - (id) RTFD;
 - (id) RTFDFileWrapper;
 - (id) documentAttributes;
 - (void) _setRTFDFileWrapper:(id)a ;
 - (id) _RTFDFileWrapper;
 - (id) documentAttribute:(id)a ;
 - (void) collectResources;
 - (void) writeHeader;
 - (void) writeBody;
 - (void) writeRTF;
 - (id) _plainFontNameForFont:(id)a ;
 - (void) writeEscapedUTF8String:(id)a ;
 - (int) _mostCompatibleCharset:(id)a ;
 - (void) _writeCharacters:(id)a range:({_NSRange=QQ})b ;
 - (void) writeDate:(id)a ;
 - (void) writeStringDocumentAttribute:(id)a withRTFKeyword:(r*)b ;
 - (void) writeDateDocumentAttribute:(id)a withRTFKeyword:(r*)b ;
 - (void) writeKeywordsDocumentAttribute;
 - (void) _writeVersionsAndEncodings;
 - (void) writeFontTable;
 - (void) writeColorTable;
 - (void) writeStyleSheetTable;
 - (void) writeListTable;
 - (void) writeInfo;
 - (void) writePaperSize;
 - (void) writeHyphenation;
 - (void) writeDefaultTabInterval;
 - (void) writeBackgroundColor;
 - (void) writeColor:(id)a type:(unsigned long long)b ;
 - (void) writeFont:(id)a forceFontNumber:(BOOL)b ;
 - (void) writeKern:(id)a ;
 - (void) writeBaselineOffset:(id)a ;
 - (void) writeSuperscript:(id)a ;
 - (void) writeUnderlineStyle:(id)a allowStrikethrough:(BOOL)b ;
 - (void) writeStrikethroughStyle:(id)a ;
 - (void) writeLigature:(id)a ;
 - (void) writeCharacterShape:(id)a ;
 - (void) writeStrokeWidth:(id)a ;
 - (void) writeObliqueness:(id)a ;
 - (void) writeExpansion:(id)a ;
 - (void) writeShadow:(id)a ;
 - (void) writeTableHeader:(id)a atIndex:(unsigned long long)b nestingLevel:(unsigned long long)c ;
 - (void) writeParagraphStyle:(id)a ;
 - (BOOL) writeLinkInfo:(id)a ;
 - (void) writeCharacterAttributes:(id)a previousAttributes:(id)b ;
 - (unsigned long long) textFlowWithAttributes:(id)a range:(^{_NSRange=QQ})b ;
 - (void) writeTextFlow:(unsigned long long)a ;
 - (void) writeGlyphInfo:(id)a ;
 - (BOOL) writeCellTerminator:(id)a atIndex:(unsigned long long)b nestingLevel:(unsigned long long)c ;
 - (void) restoreAttributes:(id)a ;
 - (void) writeAttachment:(id)a editableData:(id)b editableTypeIdentifier:(id)c ;
 - (void) _setPreserveNaturalAlignment:(BOOL)a ;


@end
