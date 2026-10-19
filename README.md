<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:0b1d2e,50:123a5a,100:1f6f8b&height=220&section=header&text=Mahima%20Vahadne&fontSize=52&fontColor=ffffff&fontAlignY=38&animation=fadeIn&desc=Machine%20Learning%20%C2%B7%20Data%20Science%20%C2%B7%20Full-Stack%20%C2%B7%20IoT&descSize=18&descAlignY=60" width="100%" alt="Mahima Vahadne"/>

<a href="https://github.com/mahimav11">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=500&size=21&duration=3200&pause=900&color=1F6F8B&center=true&vCenter=true&width=760&height=40&lines=I+turn+models+into+working+systems;Sensors+to+cloud+to+prediction+to+decision;Machine+learning+for+agriculture+and+accessibility;Currently+building+OnioRakshak" alt="Typing intro"/>
</a>

<br/>

<a href="https://www.linkedin.com/in/mahima-vahadne"><img src="https://img.shields.io/badge/LinkedIn-mahima--vahadne-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white" alt="LinkedIn"/></a>
<a href="https://github.com/mahimav11"><img src="https://img.shields.io/github/followers/mahimav11?label=Followers&style=for-the-badge&logo=github&color=0b1d2e" alt="GitHub followers"/></a>

</div>

<br/>

## Overview

I am a Computer Engineering (Data Science) student and former Data Science intern at **Celebal Technologies**, based in Maharashtra, India.

Most machine learning work stops at a notebook. I care about the part after that: the data pipeline underneath a model, the API around it, the interface in front of it, and the hardware feeding it when the problem is physical. That is why my projects span **Data Science, NLP, Computer Vision, full-stack web and embedded IoT**, and why many of them are built for people who are rarely the target user of software: farmers and the visually impaired.

<table>
<tr>
<td width="50%" valign="top">

**Focus areas**

- Predictive modelling and explainable ML
- NLP, retrieval-augmented generation and knowledge graphs
- Computer vision and medical imaging
- Industrial IoT and edge-to-cloud systems
- Multilingual, accessible product design

</td>
<td width="50%" valign="top">

**Right now**

- Building **OnioRakshak**, my final-year IoT and ML system
- Writing an IEEE conference paper on it
- Developing a hybrid **RAG + Knowledge Graph** chatbot
- Studying **knee MRI abnormality detection** from first principles
- Open to Data Science, ML and software engineering roles

</td>
</tr>
</table>

<br/>

## Flagship: OnioRakshak

> An end-to-end smart storage system that watches stored onions, predicts how long they will last and what they will sell for, and acts on its own when conditions turn risky.

Onion losses in storage come from heat, humidity, gas build-up, moisture and pests, and farmers usually find out after the damage is done. OnioRakshak closes that loop: sensors measure, models predict, actuators respond, and the farmer is informed in their own language.

```mermaid
flowchart LR
    subgraph Edge["Edge: ESP32"]
        S1["DHT22<br/>temperature, humidity"]
        S2["MQ135<br/>gas"]
        S3["Rain sensor"]
        S4["PIR<br/>intrusion"]
    end

    subgraph Core["Backend and ML"]
        API["REST API<br/>FastAPI"]
        M1["Shelf-life model"]
        M2["Price forecast model"]
        M3["Risk classifier"]
        BOT["Multilingual RAG chatbot<br/>FAISS + Gemini"]
    end

    subgraph Out["Action"]
        A1["Exhaust fan"]
        A2["Curtain motor"]
        A3["Buzzer"]
        UI["React dashboard<br/>Marathi, Hindi, English"]
        AL["SMS and WhatsApp alerts"]
    end

    S1 --> API
    S2 --> API
    S3 --> API
    S4 --> API
    API --> M1
    API --> M2
    API --> M3
    API --> BOT
    M3 --> A1
    M3 --> A2
    M3 --> A3
    M1 --> UI
    M2 --> UI
    BOT --> UI
    M3 --> AL
```

| Layer | Decisions |
|---|---|
| Sensing | ESP32 reads temperature, humidity, gas, rain and intrusion, with processing at the edge |
| Prediction | Separate models for shelf life, market price and storage risk, packaged as `.joblib` artefacts |
| Assistant | Hybrid chatbot: rule-based layer first, Gemini-powered RAG over a curated onion knowledge base as fallback; answers in the language the farmer writes in, with voice input and output |
| Interface | React (Vite) and Tailwind, farmer-first design, whole interface translated into Marathi, Hindi and English |
| Engineering | Protected `main`, one feature branch per module, every change through a pull request |

<br/>

## Selected work

### Data Science

<table>
<tr>
<td width="33%" valign="top">

**[Customer Churn Prediction](https://github.com/mahimav11/customer_churn_prediction)**

Predicts which customers will leave and explains each prediction, so a retention team knows what to act on, not just who is at risk.

`XGBoost` `SHAP` `Flask`

</td>
<td width="33%" valign="top">

**[Sentiment Analysis on Product Reviews](https://github.com/mahimav11/sentiment_analysis_nlp)**

Benchmarks a classical TF-IDF baseline against BERT on review text, with an interactive demo.

`TF-IDF` `BERT` `Streamlit`

</td>
<td width="33%" valign="top">

**[Sales Forecasting and BI Dashboard](https://github.com/mahimav11/sales_forecasting_bi)**

Compares statistical and additive time-series models and delivers the result as a decision-ready dashboard.

`Prophet` `SARIMA` `Power BI`

</td>
</tr>
</table>

### Deep Learning and Applied AI

<table>
<tr>
<td width="50%" valign="top">

**[SightVoice](https://github.com/mahimav11/sightvoice_assistant)**

An assistive scene reader for visually impaired users. A PyTorch encoder-decoder (frozen ResNet50, Bahdanau attention, GRU decoder) describes an image, and speech synthesis reads the caption aloud through an accessibility-focused Streamlit interface built around WCAG 2.1.

`PyTorch` `Attention` `gTTS` `Streamlit`

</td>
<td width="50%" valign="top">

**Memory-Augmented Chatbot** (in progress)

Combines vector retrieval for static knowledge, a Neo4j knowledge graph for structured reasoning, long-term memory for personalisation, and LangGraph routing to live tools. Evaluated on context relevance, answer correctness and faithfulness.

`LangGraph` `FAISS` `Neo4j` `FastAPI`

</td>
</tr>
</table>

### IoT and Full-Stack

<table>
<tr>
<td width="33%" valign="top">

**MilkGuard**

An industrial-IoT system that flags milk adulteration from pH, turbidity and temperature readings, with a live monitoring dashboard. Team leader on a five-member project.

`Arduino` `NodeMCU` `Supabase` `React`

</td>
<td width="33%" valign="top">

**Farmer E-Diary**

A bilingual Marathi and English record-keeping app for farmers covering dairy, flour mill, onion sales, vet and feed, medical and diesel.

`Firebase` `SQLite` `JavaScript`

</td>
<td width="33%" valign="top">

**SmartFarm**

Deployed and customised an open-source agriculture platform: crop and fertiliser recommendation, plant disease detection and weather. Fixed a routing defect and set up authentication.

`Random Forest` `CNN` `Streamlit`

</td>
</tr>
</table>

<br/>

## How I work

- **Ship the whole path.** A model is not finished until someone can use it. I build the API and interface around it.
- **Explain, do not only predict.** I favour interpretable output (SHAP, retrieval with sources) so users can trust and challenge results.
- **Design for the real user.** Language, literacy and connectivity shape the product, so I build multilingual and voice-first interfaces where they matter.
- **Disciplined version control.** Feature branches, small commits and reviewed pull requests, even on solo modules.
- **Be honest about data.** I label synthetic data as synthetic and keep real and generated datasets clearly separated.

<br/>

## Toolbox

<div align="center">

<img src="https://skillicons.dev/icons?i=py,js,react,nodejs,express,mongodb,fastapi,flask,pytorch,tailwind,vite,firebase,supabase,neo4j,arduino,powerbi,git,github&perline=9" alt="Technology icons"/>

</div>

| Area | Tools |
|---|---|
| Machine learning | PyTorch, XGBoost, scikit-learn, BERT and Transformers, Prophet, SARIMA, SHAP |
| Generative AI | LangGraph, FAISS, Chroma, Neo4j, Gemini API, RAG pipelines |
| Backend | FastAPI, Flask, Node.js, Express, REST design |
| Frontend | React, Vite, Tailwind CSS, Streamlit |
| Data and storage | MongoDB, Firebase, Supabase, SQLite, Appwrite, Power BI |
| Embedded and IoT | ESP32, Arduino, NodeMCU, DHT22, MQ135, PIR |
| Practice | Git, GitHub flow, pull-request workflow |

<br/>

## GitHub activity

<div align="center">

<img height="165" src="https://github-readme-stats.vercel.app/api?username=mahimav11&show_icons=true&hide_border=true&hide_rank=true&custom_title=Mahima%20Vahadne%27s%20GitHub%20Stats&title_color=1f6f8b&icon_color=1f6f8b" alt="GitHub stats"/>
<img height="165" src="https://github-readme-stats.vercel.app/api/top-langs/?username=mahimav11&layout=compact&hide_border=true&hide=jupyter%20notebook,html,ejs&langs_count=6&title_color=1f6f8b" alt="Top languages"/>

<img src="https://ghchart.rshah.org/1f6f8b/mahimav11" width="100%" alt="Contribution heatmap"/>

</div>

<br/>

## Connect

I am looking for roles where machine learning meets real engineering: Data Science, ML engineering and software development. If you are building something in agriculture, accessibility, IoT or applied AI, I would like to hear about it.

<div align="center">

<a href="https://www.linkedin.com/in/mahima-vahadne"><img src="https://img.shields.io/badge/Message%20me%20on%20LinkedIn-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white" alt="Message on LinkedIn"/></a>

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:1f6f8b,50:123a5a,100:0b1d2e&height=110&section=footer" width="100%" alt=""/>

</div>
