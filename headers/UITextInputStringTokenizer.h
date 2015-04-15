
@protocol UITextInputTokenizer;
@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer> {

    @"UIResponder<UITextInput>" _textInput;
}

 - (id) rangeEnclosingPosition:(id)awithGranularity:(long long)binDirection:(long long)c;
 - (BOOL) isPosition:(id)aatBoundary:(long long)binDirection:(long long)c;
 - (id) positionFromPosition:(id)atoBoundary:(long long)binDirection:(long long)c;
 - (BOOL) isPosition:(id)awithinTextUnit:(long long)binDirection:(long long)c;
 - (long long) _indexForTextPosition:(id)a;
 - (BOOL) _isDownstreamForDirection:(long long)aatPosition:(id)b;
 - ({_NSRange=QQ}) _getClosestTokenRangeForPosition:(id)agranularity:(long long)bdownstream:(BOOL)c;
 - (id) _positionFromPosition:(id)aoffset:(unsigned long long)baffinity:(long long)c;
 - (id) initWithTextInput:(id)a;


@end
