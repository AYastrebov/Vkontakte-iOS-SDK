/*
 * Copyright 2011 Andrey Yastrebov
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <UIKit/UIKit.h>
#import "Vkontakte.h"

@interface ViewController : UIViewController <VkontakteDelegate>
{
    IBOutlet UIButton *_loginB;
    
    IBOutlet UIImageView *_userImage;
    IBOutlet UILabel *_userName;
    IBOutlet UILabel *_userSurName;
    IBOutlet UILabel *_userBDate;
    IBOutlet UILabel *_userGender;
    
    IBOutlet UIButton *_postMessage;
    IBOutlet UIButton *_postImage;
    IBOutlet UIButton *_postMessageWithLink;
    IBOutlet UIButton *_postImageWithLink;
    IBOutlet UIButton *_postImageWithLinkAndText;
    IBOutlet UIButton *_signToGroup;
    
    Vkontakte *_vkontakte;    
}

- (IBAction)loginPressed:(id)sender;

- (IBAction)signToGroup:(id)sender;
- (IBAction)postMessagePressed:(id)sender;
- (IBAction)postImagePressed:(id)sender;
- (IBAction)postMessageWithLinkPressed:(id)sender;
- (IBAction)postImageWithTextPressed:(id)sender;
- (IBAction)postImageWithTextAndLinkPressed:(id)sender;

- (void)refreshButtonState;
- (void)hideControls:(BOOL)hide;

@end
