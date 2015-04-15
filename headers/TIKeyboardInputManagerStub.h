
@protocol TIKeyboardInputManager;
@interface TIKeyboardInputManagerStub : NSObject <TIKeyboardInputManager> {

}
 + (id) serverInterface;
 + (void) setClassesForSelectorsReplyingWithCandidatesInInterface:(id)a;

 - (void) textAccepted:(id)a ;
 - (void) syncToKeyboardState:(id)a completionHandler:(@?)b ;
 - (void) handleKeyboardInput:(id)a keyboardState:(id)b completionHandler:(@?)c ;
 - (void) generateCandidatesWithKeyboardState:(id)a candidateRange:({_NSRange=QQ})b completionHandler:(@?)c ;
 - (void) generateAutocorrectionsWithKeyboardState:(id)a completionHandler:(@?)b ;
 - (void) handleAcceptedCandidate:(id)a keyboardState:(id)b completionHandler:(@?)c ;
 - (void) skipHitTestForTouchEvent:(id)a keyboardState:(id)b ;
 - (void) performHitTestForTouchEvent:(id)a keyboardState:(id)b continuation:(@?)c ;
 - (void) adjustPhraseBoundaryInForwardDirection:(BOOL)a keyboardState:(id)b completionHandler:(@?)c ;
 - (void) lastAcceptedCandidateCorrected;
 - (void) setOriginalInput:(id)a ;
 - (void) candidateRejected:(id)a ;
 - (void) writeTypologyLogWithCompletionHandler:(@?)a ;
 - (void) generateReplacementsForString:(id)a keyLayout:(id)b continuation:(@?)c ;
 - (void) generateRefinementsForCandidate:(id)a keyboardState:(id)b completionHandler:(@?)c ;
 - (id) keyboardConfiguration;


@end
