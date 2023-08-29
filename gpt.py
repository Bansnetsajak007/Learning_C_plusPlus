import openai

openai.api_key = "API KEY"

try:

    Prompt = input("Enter Prompt: ")
    code = input("Enter your buggy code: ")


    completion = openai.ChatCompletion.create(
    model="gpt-3.5-turbo",
    messages=[
      {"role": "user", "content": f"{Prompt}{code}."}
    ]
    )
    print(completion.choices[0].message.content)
    
 


except :
    print(" Problem Occured!!")
    






