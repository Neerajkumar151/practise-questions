from google import genai
from google.genai import types

# Replace with your API key
api_key = "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"

client = genai.Client(api_key=api_key)

try:
    # Test prompt for image generation
    response = client.models.generate_content(
        model="google/gemini-2.0-flash-exp",
        contents=["Generate a 512x512 image of a futuristic city skyline at sunset, digital art style"],
        config=types.GenerateContentConfig(
            response_modalities=["Image"]  # Specify you want an image
        )
    )

    # The generated image(s) will be in response.output_images
    for i, img in enumerate(response.output_images):
        # Save the image locally
        with open(f"generated_image_{i}.png", "wb") as f:
            f.write(img.data)
    print("API key is working. Image generated successfully!")

except Exception as e:
    print("API key is NOT working. Error:")
    print(e)
