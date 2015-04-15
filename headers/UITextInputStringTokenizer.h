
@protocol UITextInputTokenizer;
@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer> {

    UIResponder<UITextInput>* _textInput;
}

 - (id) rangeEnclosingPosition:(id)a withGranularity:(long long)b inDirection:(long long)c ;
 - (BOOL) isPosition:(id)a atBoundary:(long long)b inDirection:(long long)c ;
 - (id) positionFromPosition:(id)a toBoundary:(long long)b inDirection:(long long)c ;
 - (BOOL) isPosition:(id)a withinTextUnit:(long long)b inDirection:(long long)c ;
 - (long long) _indexForTextPosition:(id)a ;
 - (BOOL) _isDownstreamForDirection:(long long)a atPosition:(id)b ;
 - ({_NSRange=QQ}) _getClosestTokenRangeForPosition:(id)a granularity:(long long)b downstream:(BOOL)c ;
 - (id) _positionFromPosition:(id)a offset:(unsigned long long)b affinity:(long long)c ;
 - (id) initWithTextInput:(id)a ;


@end
