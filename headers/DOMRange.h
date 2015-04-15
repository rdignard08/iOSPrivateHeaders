
@protocol UIWebSelectionBlock;
@interface DOMRange : DOMObject <UIWebSelectionBlock> {

}
 + (id) rangeForFirstPosition:(id)asecond:(id)b;

 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingRect;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingRectAndInsideFixedPosition:(^i)a;
 - (id) asDomNode;
 - (BOOL) selectable;
 - (id) parentBlock;
 - (BOOL) canShrinkDirectlyToTextOnly;
 - (id) enclosingDocument;
 - (id) asDomRange;
 - (BOOL) isSameBlock:(id)a;
 - (BOOL) containsBlock:(id)a;
 - (BOOL) strictlyContainsBlock:(id)a;
 - (id) largerParent;
 - (BOOL) rendersAsBlock;
 - (void) unionWithRange:(id)a;
 - (BOOL) containsRange:(id)a;
 - (id) webFrame;
 - (id) rangeOfContents;
 - (id) webArchive;
 - (id) markupString;
 - (id) enclosingWordRange;
 - (id) startPosition;
 - (id) endPosition;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (void) selectNodeContents:(id)a;
 - (BOOL) collapsed;
 - (void) insertNode:(id)a;
 - (void) setStartAfter:(id)a;
 - (void) setEndAfter:(id)a;
 - (id) _text;
 - (id) cloneContents;
 - (id) cloneRange;
 - (s) compareBoundaryPoints:(S)asourceRange:(id)b;
 - (id) firstNode;
 - (id) startContainer;
 - (i) startOffset;
 - (id) endContainer;
 - (i) endOffset;
 - (id) commonAncestorContainer;
 - (void) setStart:(id)aoffset:(i)b;
 - (void) setEnd:(id)aoffset:(i)b;
 - (void) selectNode:(id)a;
 - (void) detach;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingBox;
 - (id) textRects;
 - (id) lineBoxRects;
 - (^{CGImage=}) renderedImageForcingBlackText:(BOOL)a;
 - (id) text;
 - (void) setStart:(id)a;
 - (void) setEnd:(id)a;
 - (void) setStartBefore:(id)a;
 - (void) setEndBefore:(id)a;
 - (void) collapse:(BOOL)a;
 - (s) compareBoundaryPoints:(S)a;
 - (void) deleteContents;
 - (id) extractContents;
 - (void) surroundContents:(id)a;
 - (id) createContextualFragment:(id)a;
 - (BOOL) intersectsNode:(id)a;
 - (s) compareNode:(id)a;
 - (s) comparePoint:(id)aoffset:(i)b;
 - (BOOL) isPointInRange:(id)aoffset:(i)b;
 - (void) expand:(id)a;
 - (void) move:(I)ainDirection:(i)b;
 - (void) extend:(I)ainDirection:(i)b;
 - (id) toString;


@end
