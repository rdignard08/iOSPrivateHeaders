
@protocol UITextInputTokenizer;
@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer> {

    @"UIResponder<UITextInput>" _textInput;
}

 - (id) rangeEnclosingPosition:(id)awithGranularity:(q)binDirection:(q)c;
 - (BOOL) isPosition:(id)aatBoundary:(q)binDirection:(q)c;
 - (id) positionFromPosition:(id)atoBoundary:(q)binDirection:(q)c;
 - (BOOL) isPosition:(id)awithinTextUnit:(q)binDirection:(q)c;
 - (q) _indexForTextPosition:(id)a;
 - (BOOL) _isDownstreamForDirection:(q)aatPosition:(id)b;
 - ({_NSRange=QQ}) _getClosestTokenRangeForPosition:(id)agranularity:(q)bdownstream:(BOOL)c;
 - (id) _positionFromPosition:(id)aoffset:(Q)baffinity:(q)c;
 - (id) initWithTextInput:(id)a;


@end
