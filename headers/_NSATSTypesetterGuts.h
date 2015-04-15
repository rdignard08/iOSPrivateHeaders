
@interface _NSATSTypesetterGuts : NSObject {

    @"NSATSLineFragment" _lineFragment;
    @"NSATSGlyphStorage" _glyphStorage;
    unsigned long long _lastGlyphIndex;
    unsigned long long _lastContainerIndex;
    ^{?=^{?}{_NSRange=QQ}{_NSRange=QQ}ff^?^?dddddd{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{_NSRange=QQ}@dq{?=b4b1b1b1b4b4b1b1b1b1b2b1b10}[0^v]} _typesetterAuxiliary;
    ^(?={?=dddq}{?={CGRect={CGPoint=dd}{CGSize=dd}}}) _lineFragmentRectArgs;
    char* _bidiLevels;
    double _defaultTighteningFactor;
    {?="_isiChatTypesetter"b1"_resToWillSetLineFragmentRect"b1"_isBusy"b1"_baselineRendering"b1"_forceWordWrapping"b1"_reserved"b27} _flags;
    {?="_resolvedWritingDirection"b2"_reserved"b30} _paragraphState;
    ^{__CTTypesetter=} _ctTypesetter;
}

 - (void) dealloc;
 - (void) finalize;
 - (id) initWithTypesetter:(id)a;


@end
