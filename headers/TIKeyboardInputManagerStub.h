
@protocol TIKeyboardInputManager;
@interface TIKeyboardInputManagerStub : NSObject <TIKeyboardInputManager> {

}
 + (id) serverInterface;
 + (void) setClassesForSelectorsReplyingWithCandidatesInInterface:(id)a;

 - (void) textAccepted:(id)a;
 - (void) syncToKeyboardState:(id)acompletionHandler:(@?)b;
 - (void) handleKeyboardInput:(id)akeyboardState:(id)bcompletionHandler:(@?)c;
 - (void) generateCandidatesWithKeyboardState:(id)acandidateRange:({_NSRange=QQ})bcompletionHandler:(@?)c;
 - (void) generateAutocorrectionsWithKeyboardState:(id)acompletionHandler:(@?)b;
 - (void) handleAcceptedCandidate:(id)akeyboardState:(id)bcompletionHandler:(@?)c;
 - (void) skipHitTestForTouchEvent:(id)akeyboardState:(id)b;
 - (void) performHitTestForTouchEvent:(id)akeyboardState:(id)bcontinuation:(@?)c;
 - (void) adjustPhraseBoundaryInForwardDirection:(BOOL)akeyboardState:(id)bcompletionHandler:(@?)c;
 - (void) lastAcceptedCandidateCorrected;
 - (void) setOriginalInput:(id)a;
 - (void) candidateRejected:(id)a;
 - (void) writeTypologyLogWithCompletionHandler:(@?)a;
 - (void) generateReplacementsForString:(id)akeyLayout:(id)bcontinuation:(@?)c;
 - (void) generateRefinementsForCandidate:(id)akeyboardState:(id)bcompletionHandler:(@?)c;
 - (id) keyboardConfiguration;


@end
