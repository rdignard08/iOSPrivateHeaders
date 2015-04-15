
@interface _UIFontExtraData : NSObject {

    NSData* _latin1MappingTable;
    NSCharacterSet* _coveredCharacterSet;
    double _ascender;
    double _descender;
    double _lineHeight;
    double _lineGap;
    {__fFlags="_initialized"b1"_isSystemFont"b1"_hasKernPair"b1"_checkedLatin1Table"b1"_isIBTextStyleFont"b1} _fFlags;
}

 - (void) dealloc;


@end
