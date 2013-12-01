//
//  PlayingCardGameViewController.m
//  Matchismo
//
//  Created by Xiaoxuan Wang on 1/12/13.
//  Copyright (c) 2013 brandsfever. All rights reserved.
//

#import "PlayingCardGameViewController.h"
#import "PlayingCardDeck.h"

@interface PlayingCardGameViewController ()

@end

@implementation PlayingCardGameViewController

- (Deck *)createDeck
{
    return [[PlayingCardDeck alloc]init];
}
@end
